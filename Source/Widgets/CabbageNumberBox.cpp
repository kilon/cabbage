/*
  Copyright (C) 2016 Rory Walsh

  Cabbage is free software; you can redistribute it
  and/or modify it under the terms of the GNU General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  Cabbage is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU Lesser General Public License for more details.

  You should have received a copy of the GNU General Public
  License along with Csound; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
  02111-1307 USA
*/

#include "CabbageNumberBox.h"

CabbageNumberBox::CabbageNumberBox (ValueTree wData)
    : widgetData (wData),
      slider (CabbageWidgetData::getStringProp (wData, CabbageIdentifierIds::name)),
      label(),
      text (CabbageWidgetData::getStringProp (wData, CabbageIdentifierIds::text)),
      align (CabbageWidgetData::getStringProp (wData, CabbageIdentifierIds::align))
{
    setName (CabbageWidgetData::getStringProp (wData, CabbageIdentifierIds::name));
    widgetData.addListener (this);              //add listener to valueTree so it gets notified when a widget's property changes
    initialiseCommonAttributes (this, wData);   //initialise common attributes such as bounds, name, rotation, etc..

    //slider.setName(text);
    slider.toFront (true);

    label.setText (text, dontSendNotification);
    label.setJustificationType (Justification::centred);
    label.setColour (Label::textColourId, Colour::fromString (CabbageWidgetData::getStringProp (wData, CabbageIdentifierIds::textcolour)));

    addAndMakeVisible (label);
    addAndMakeVisible (slider);

    slider.setSliderStyle (Slider::LinearBarVertical);
    slider.setColour (Slider::trackColourId, Colour::fromString (CabbageWidgetData::getStringProp (wData, CabbageIdentifierIds::colour)));
    slider.setColour (Slider::thumbColourId, Colour::fromString (CabbageWidgetData::getStringProp (wData, CabbageIdentifierIds::colour)));
    slider.setColour (Slider::textBoxHighlightColourId, slider.findColour (Slider::textBoxBackgroundColourId));
    slider.setColour (Slider::textBoxTextColourId, Colour::fromString (CabbageWidgetData::getStringProp (wData, CabbageIdentifierIds::fontcolour)));
    slider.setColour (Slider::textBoxBackgroundColourId, Colour::fromString (CabbageWidgetData::getStringProp (wData, CabbageIdentifierIds::colour)));

    slider.setVelocityBasedMode (CabbageWidgetData::getNumProp (wData, CabbageIdentifierIds::velocity) == 1 ? true : false);
    slider.setVelocityModeParameters (CabbageWidgetData::getNumProp (wData, CabbageIdentifierIds::velocity));
    slider.getProperties().set ("decimalPlaces", CabbageWidgetData::getNumProp (wData, CabbageIdentifierIds::decimalplaces));

    const float min = CabbageWidgetData::getNumProp (wData, CabbageIdentifierIds::min);
    const float max = CabbageWidgetData::getNumProp (wData, CabbageIdentifierIds::max);
    const float incr = CabbageWidgetData::getNumProp (wData, CabbageIdentifierIds::sliderincr);
    const float skew = CabbageWidgetData::getNumProp (wData, CabbageIdentifierIds::sliderskew);
    const float value = CabbageWidgetData::getNumProp (wData, CabbageIdentifierIds::value);

    slider.setSkewFactor (skew);
    slider.setRange (min, max, incr);
    slider.setValue (value, dontSendNotification);
    slider.setTooltip (CabbageWidgetData::getStringProp (widgetData, CabbageIdentifierIds::popuptext));
}

void CabbageNumberBox::resized()
{
    if (text.isNotEmpty())
    {
        if (align == "above")
        {
            label.setBounds (0, 0, getWidth(), ((getHeight()) / 2) - 2);
            slider.setBounds (0, (getHeight() / 2), getWidth(), getHeight() - (getHeight() / 2));
        }
        else if (align == "below")
        {
            label.setBounds (0, (getHeight() / 2), getWidth(), getHeight() - (getHeight() / 2));
            slider.setBounds (0, 0, getWidth(), ((getHeight()) / 2) - 2);
        }
        else if (align == "left")
        {
            label.setBounds (0, 0, getWidth() / 2, getHeight());
            slider.setBounds (getWidth() / 2, 0, getWidth() / 2, getHeight());
        }
        else if (align == "right")
        {
            label.setBounds (getWidth() / 2, 0, getWidth() / 2, getHeight());
            slider.setBounds (0, 0, getWidth() / 2, getHeight());
        }
    }
    else
        slider.setBounds (0, 0, getWidth(), getHeight());
}

void CabbageNumberBox::valueTreePropertyChanged (ValueTree& valueTree, const Identifier& prop)
{
    if (prop == CabbageIdentifierIds::value)
    {
        slider.setValue (CabbageWidgetData::getNumProp (valueTree, CabbageIdentifierIds::value), dontSendNotification);
    }
    else
    {
        slider.setTooltip (CabbageWidgetData::getStringProp (widgetData, CabbageIdentifierIds::popuptext));
        slider.setColour (Slider::trackColourId, Colour::fromString (CabbageWidgetData::getStringProp (valueTree, CabbageIdentifierIds::colour)));
        slider.setColour (Slider::thumbColourId, Colour::fromString (CabbageWidgetData::getStringProp (valueTree, CabbageIdentifierIds::colour)));
        label.setColour (Label::textColourId, Colour::fromString (CabbageWidgetData::getStringProp (valueTree, CabbageIdentifierIds::textcolour)));
		//todo: work out why this gets rid of the font from the numberbox
		//slider.setColour (Slider::textBoxHighlightColourId, slider.findColour (Slider::textBoxBackgroundColourId));
        slider.setColour (Slider::textBoxTextColourId, Colour::fromString (CabbageWidgetData::getStringProp (valueTree, CabbageIdentifierIds::fontcolour)));
        slider.setColour (Slider::textBoxBackgroundColourId, Colour::fromString (CabbageWidgetData::getStringProp (valueTree, CabbageIdentifierIds::colour)));
        handleCommonUpdates (this, valueTree);      //handle comon updates such as bounds, alpha, rotation, visible, etc
        align = CabbageWidgetData::getStringProp (valueTree, CabbageIdentifierIds::align);
		label.setText (getText(), dontSendNotification);
        resized();
    }
}