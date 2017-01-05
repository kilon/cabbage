# Automatically generated makefile, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

# (this disables dependency generation if multiple architectures are set)
DEPFLAGS := $(if $(word 2, $(TARGET_ARCH)), , -MMD)

ifndef STRIP
  STRIP=strip
endif

ifndef AR
  AR=ar
endif

ifndef CONFIG
  CONFIG=Debug
endif

ifeq ($(CONFIG),Debug)
  JUCE_BINDIR := build
  JUCE_LIBDIR := build
  JUCE_OBJDIR := build/intermediate/Debug
  JUCE_OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := -march=native
  endif

  JUCE_CPPFLAGS := $(DEPFLAGS) -DLINUX=1 -DDEBUG=1 -D_DEBUG=1 -DCabbage_IDE_Build=1 -DJUCER_LINUX_MAKE_6D53C8B4=1 -DJUCE_APP_VERSION=1.0.0 -DJUCE_APP_VERSION_HEX=0x10000 $(shell pkg-config --cflags alsa freetype2 libcurl x11 xext xinerama) -pthread -I../../JuceLibraryCode -I../../JuceLibraryCode/modules -I"/usr/local/include/csound"
  JUCE_CFLAGS += $(CFLAGS) $(JUCE_CPPFLAGS) $(TARGET_ARCH) -g -ggdb -O0
  JUCE_CXXFLAGS += $(CXXFLAGS) $(JUCE_CFLAGS) -std=c++14
  JUCE_LDFLAGS += $(LDFLAGS) $(TARGET_ARCH) -L$(JUCE_BINDIR) -L$(JUCE_LIBDIR) -L"/usr/local/lib" $(shell pkg-config --libs alsa freetype2 libcurl x11 xext xinerama) -lGL -ldl -lpthread -lrt -lcsound64 -lsndfile 

  TARGET := Cabbage
  BLDCMD = $(CXX) -o $(JUCE_OUTDIR)/$(TARGET) $(OBJECTS) $(JUCE_LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(JUCE_OUTDIR)/$(TARGET) $(JUCE_OBJDIR)
endif

ifeq ($(CONFIG),Release)
  JUCE_BINDIR := build
  JUCE_LIBDIR := build
  JUCE_OBJDIR := build/intermediate/Release
  JUCE_OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := -march=native
  endif

  JUCE_CPPFLAGS := $(DEPFLAGS) -DLINUX=1 -DNDEBUG=1 -DCabbage_IDE_Build=1 -DJUCER_LINUX_MAKE_6D53C8B4=1 -DJUCE_APP_VERSION=1.0.0 -DJUCE_APP_VERSION_HEX=0x10000 $(shell pkg-config --cflags alsa freetype2 libcurl x11 xext xinerama) -pthread -I../../JuceLibraryCode -I../../JuceLibraryCode/modules -I"/usr/local/include/csound"
  JUCE_CFLAGS += $(CFLAGS) $(JUCE_CPPFLAGS) $(TARGET_ARCH) -O3
  JUCE_CXXFLAGS += $(CXXFLAGS) $(JUCE_CFLAGS) -std=c++14
  JUCE_LDFLAGS += $(LDFLAGS) $(TARGET_ARCH) -L$(JUCE_BINDIR) -L$(JUCE_LIBDIR) -fvisibility=hidden -L"/usr/local/lib" $(shell pkg-config --libs alsa freetype2 libcurl x11 xext xinerama) -lGL -ldl -lpthread -lrt -lcsound64 -lsndfile 

  TARGET := Cabbage
  BLDCMD = $(CXX) -o $(JUCE_OUTDIR)/$(TARGET) $(OBJECTS) $(JUCE_LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(JUCE_OUTDIR)/$(TARGET) $(JUCE_OBJDIR)
endif

OBJECTS := \
  $(JUCE_OBJDIR)/CabbageContentComponent_ee810147.o \
  $(JUCE_OBJDIR)/CabbageDocumentWindow_3af539ae.o \
  $(JUCE_OBJDIR)/CabbageToolbarFactory_a8f7dbd2.o \
  $(JUCE_OBJDIR)/AudioGraph_b22f6a5b.o \
  $(JUCE_OBJDIR)/CabbagePluginEditor_4348213a.o \
  $(JUCE_OBJDIR)/CabbagePluginProcessor_8a6343af.o \
  $(JUCE_OBJDIR)/CsoundPluginEditor_3f0e809d.o \
  $(JUCE_OBJDIR)/CsoundPluginProcessor_dc39856c.o \
  $(JUCE_OBJDIR)/GenericCabbageEditor_50c74848.o \
  $(JUCE_OBJDIR)/GenericCabbagePluginProcessor_7befc9ee.o \
  $(JUCE_OBJDIR)/CabbageBinaryData_812f3f1.o \
  $(JUCE_OBJDIR)/CabbageCodeEditor_72bb40f.o \
  $(JUCE_OBJDIR)/EditorAndConsoleContentComponent_87ff20a7.o \
  $(JUCE_OBJDIR)/CabbagePropertiesPanel_1024ea82.o \
  $(JUCE_OBJDIR)/ComponentLayoutEditor_a8e1e34c.o \
  $(JUCE_OBJDIR)/ComponentOverlay_8d6d5025.o \
  $(JUCE_OBJDIR)/CabbageGenericPluginLookAndFeel_f8a44125.o \
  $(JUCE_OBJDIR)/CabbageIDELookAndFeel_8b919965.o \
  $(JUCE_OBJDIR)/CabbageLookAndFeel_85188477.o \
  $(JUCE_OBJDIR)/CabbageLookAndFeel2_1e182065.o \
  $(JUCE_OBJDIR)/CabbageSettings_d59022e1.o \
  $(JUCE_OBJDIR)/CabbageSettingsWindow_8ea691f1.o \
  $(JUCE_OBJDIR)/CabbageColourProperty_a06c91be.o \
  $(JUCE_OBJDIR)/CabbageNewProjectWindow_b55ea6.o \
  $(JUCE_OBJDIR)/CabbageSSHFileBrowser_34e09761.o \
  $(JUCE_OBJDIR)/Soundfiler_587b384e.o \
  $(JUCE_OBJDIR)/TableManager_fa647506.o \
  $(JUCE_OBJDIR)/CabbageButton_effd6014.o \
  $(JUCE_OBJDIR)/CabbageCheckbox_8b068ce5.o \
  $(JUCE_OBJDIR)/CabbageComboBox_ae0bd57f.o \
  $(JUCE_OBJDIR)/CabbageCsoundConsole_f188e293.o \
  $(JUCE_OBJDIR)/CabbageCustomWidgets_aa56f1e6.o \
  $(JUCE_OBJDIR)/CabbageEncoder_eecf3044.o \
  $(JUCE_OBJDIR)/CabbageFileButton_5bde2830.o \
  $(JUCE_OBJDIR)/CabbageGenTable_bcbb7a00.o \
  $(JUCE_OBJDIR)/CabbageGroupBox_dd08cf6e.o \
  $(JUCE_OBJDIR)/CabbageImage_f3ad1dc3.o \
  $(JUCE_OBJDIR)/CabbageInfoButton_4ccbc0e2.o \
  $(JUCE_OBJDIR)/CabbageKeyboard_fa013309.o \
  $(JUCE_OBJDIR)/CabbageLabel_3cb7edc.o \
  $(JUCE_OBJDIR)/CabbageNumberBox_d8ec912a.o \
  $(JUCE_OBJDIR)/CabbageRangeSlider_b2c3b526.o \
  $(JUCE_OBJDIR)/CabbageSignalDisplay_29ee9ee2.o \
  $(JUCE_OBJDIR)/CabbageSlider_1c8d4243.o \
  $(JUCE_OBJDIR)/CabbageSoundfiler_7f844aa9.o \
  $(JUCE_OBJDIR)/CabbageTextBox_4d74cf86.o \
  $(JUCE_OBJDIR)/CabbageTextEditor_9f89b35c.o \
  $(JUCE_OBJDIR)/CabbageWidgetBase_e8de3417.o \
  $(JUCE_OBJDIR)/CabbageWidgetData_ba1d0870.o \
  $(JUCE_OBJDIR)/CabbageWidgetDataInitMethods_a1a6cd7c.o \
  $(JUCE_OBJDIR)/CabbageXYPad_f88302da.o \
  $(JUCE_OBJDIR)/Cabbage_6fb7db02.o \
  $(JUCE_OBJDIR)/juce_audio_basics_6b797ca1.o \
  $(JUCE_OBJDIR)/juce_audio_devices_a742c38b.o \
  $(JUCE_OBJDIR)/juce_audio_formats_5a29c68a.o \
  $(JUCE_OBJDIR)/juce_audio_plugin_client_utils_35fbf7.o \
  $(JUCE_OBJDIR)/juce_audio_processors_dea3173d.o \
  $(JUCE_OBJDIR)/juce_audio_utils_c7eb679f.o \
  $(JUCE_OBJDIR)/juce_core_75b14332.o \
  $(JUCE_OBJDIR)/juce_cryptography_6de2ebff.o \
  $(JUCE_OBJDIR)/juce_data_structures_72d3da2c.o \
  $(JUCE_OBJDIR)/juce_events_d2be882c.o \
  $(JUCE_OBJDIR)/juce_graphics_9c18891e.o \
  $(JUCE_OBJDIR)/juce_gui_basics_8a6da59c.o \
  $(JUCE_OBJDIR)/juce_gui_extra_4a026f23.o \
  $(JUCE_OBJDIR)/juce_opengl_cd70b4c2.o \
  $(JUCE_OBJDIR)/juce_video_f128c512.o \

.PHONY: clean

$(JUCE_OUTDIR)/$(TARGET): check-pkg-config $(OBJECTS) $(RESOURCES)
	@echo Linking Cabbage
	-@mkdir -p $(JUCE_BINDIR)
	-@mkdir -p $(JUCE_LIBDIR)
	-@mkdir -p $(JUCE_OUTDIR)
	@$(BLDCMD)

check-pkg-config:
	@command -v pkg-config >/dev/null 2>&1 || { echo >&2 "pkg-config not installed. Please, install it."; exit 1; }
	@pkg-config --print-errors alsa freetype2 libcurl x11 xext xinerama

clean:
	@echo Cleaning Cabbage
	@$(CLEANCMD)

strip:
	@echo Stripping Cabbage
	-@$(STRIP) --strip-unneeded $(JUCE_OUTDIR)/$(TARGET)

$(JUCE_OBJDIR)/CabbageContentComponent_ee810147.o: ../../Source/Application/CabbageContentComponent.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageContentComponent.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageDocumentWindow_3af539ae.o: ../../Source/Application/CabbageDocumentWindow.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageDocumentWindow.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageToolbarFactory_a8f7dbd2.o: ../../Source/Application/CabbageToolbarFactory.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageToolbarFactory.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/AudioGraph_b22f6a5b.o: ../../Source/Audio/Graph/AudioGraph.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling AudioGraph.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbagePluginEditor_4348213a.o: ../../Source/Audio/Plugins/CabbagePluginEditor.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbagePluginEditor.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbagePluginProcessor_8a6343af.o: ../../Source/Audio/Plugins/CabbagePluginProcessor.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbagePluginProcessor.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CsoundPluginEditor_3f0e809d.o: ../../Source/Audio/Plugins/CsoundPluginEditor.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CsoundPluginEditor.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CsoundPluginProcessor_dc39856c.o: ../../Source/Audio/Plugins/CsoundPluginProcessor.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CsoundPluginProcessor.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/GenericCabbageEditor_50c74848.o: ../../Source/Audio/Plugins/GenericCabbageEditor.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling GenericCabbageEditor.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/GenericCabbagePluginProcessor_7befc9ee.o: ../../Source/Audio/Plugins/GenericCabbagePluginProcessor.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling GenericCabbagePluginProcessor.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageBinaryData_812f3f1.o: ../../Source/BinaryData/CabbageBinaryData.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageBinaryData.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageCodeEditor_72bb40f.o: ../../Source/CodeEditor/CabbageCodeEditor.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageCodeEditor.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/EditorAndConsoleContentComponent_87ff20a7.o: ../../Source/CodeEditor/EditorAndConsoleContentComponent.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling EditorAndConsoleContentComponent.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbagePropertiesPanel_1024ea82.o: ../../Source/InterfaceEditor/CabbagePropertiesPanel.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbagePropertiesPanel.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ComponentLayoutEditor_a8e1e34c.o: ../../Source/InterfaceEditor/ComponentLayoutEditor.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling ComponentLayoutEditor.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ComponentOverlay_8d6d5025.o: ../../Source/InterfaceEditor/ComponentOverlay.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling ComponentOverlay.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageGenericPluginLookAndFeel_f8a44125.o: ../../Source/LookAndFeel/CabbageGenericPluginLookAndFeel.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageGenericPluginLookAndFeel.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageIDELookAndFeel_8b919965.o: ../../Source/LookAndFeel/CabbageIDELookAndFeel.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageIDELookAndFeel.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageLookAndFeel_85188477.o: ../../Source/LookAndFeel/CabbageLookAndFeel.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageLookAndFeel.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageLookAndFeel2_1e182065.o: ../../Source/LookAndFeel/CabbageLookAndFeel2.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageLookAndFeel2.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageSettings_d59022e1.o: ../../Source/Settings/CabbageSettings.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageSettings.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageSettingsWindow_8ea691f1.o: ../../Source/Settings/CabbageSettingsWindow.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageSettingsWindow.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageColourProperty_a06c91be.o: ../../Source/Utilities/CabbageColourProperty.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageColourProperty.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageNewProjectWindow_b55ea6.o: ../../Source/Utilities/CabbageNewProjectWindow.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageNewProjectWindow.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageSSHFileBrowser_34e09761.o: ../../Source/Utilities/CabbageSSHFileBrowser.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageSSHFileBrowser.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/Soundfiler_587b384e.o: ../../Source/Widgets/Legacy/Soundfiler.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling Soundfiler.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TableManager_fa647506.o: ../../Source/Widgets/Legacy/TableManager.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TableManager.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageButton_effd6014.o: ../../Source/Widgets/CabbageButton.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageButton.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageCheckbox_8b068ce5.o: ../../Source/Widgets/CabbageCheckbox.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageCheckbox.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageComboBox_ae0bd57f.o: ../../Source/Widgets/CabbageComboBox.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageComboBox.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageCsoundConsole_f188e293.o: ../../Source/Widgets/CabbageCsoundConsole.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageCsoundConsole.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageCustomWidgets_aa56f1e6.o: ../../Source/Widgets/CabbageCustomWidgets.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageCustomWidgets.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageEncoder_eecf3044.o: ../../Source/Widgets/CabbageEncoder.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageEncoder.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageFileButton_5bde2830.o: ../../Source/Widgets/CabbageFileButton.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageFileButton.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageGenTable_bcbb7a00.o: ../../Source/Widgets/CabbageGenTable.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageGenTable.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageGroupBox_dd08cf6e.o: ../../Source/Widgets/CabbageGroupBox.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageGroupBox.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageImage_f3ad1dc3.o: ../../Source/Widgets/CabbageImage.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageImage.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageInfoButton_4ccbc0e2.o: ../../Source/Widgets/CabbageInfoButton.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageInfoButton.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageKeyboard_fa013309.o: ../../Source/Widgets/CabbageKeyboard.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageKeyboard.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageLabel_3cb7edc.o: ../../Source/Widgets/CabbageLabel.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageLabel.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageNumberBox_d8ec912a.o: ../../Source/Widgets/CabbageNumberBox.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageNumberBox.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageRangeSlider_b2c3b526.o: ../../Source/Widgets/CabbageRangeSlider.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageRangeSlider.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageSignalDisplay_29ee9ee2.o: ../../Source/Widgets/CabbageSignalDisplay.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageSignalDisplay.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageSlider_1c8d4243.o: ../../Source/Widgets/CabbageSlider.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageSlider.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageSoundfiler_7f844aa9.o: ../../Source/Widgets/CabbageSoundfiler.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageSoundfiler.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageTextBox_4d74cf86.o: ../../Source/Widgets/CabbageTextBox.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageTextBox.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageTextEditor_9f89b35c.o: ../../Source/Widgets/CabbageTextEditor.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageTextEditor.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageWidgetBase_e8de3417.o: ../../Source/Widgets/CabbageWidgetBase.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageWidgetBase.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageWidgetData_ba1d0870.o: ../../Source/Widgets/CabbageWidgetData.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageWidgetData.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageWidgetDataInitMethods_a1a6cd7c.o: ../../Source/Widgets/CabbageWidgetDataInitMethods.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageWidgetDataInitMethods.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/CabbageXYPad_f88302da.o: ../../Source/Widgets/CabbageXYPad.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling CabbageXYPad.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/Cabbage_6fb7db02.o: ../../Source/Cabbage.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling Cabbage.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_audio_basics_6b797ca1.o: ../../JuceLibraryCode/juce_audio_basics.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_audio_basics.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_audio_devices_a742c38b.o: ../../JuceLibraryCode/juce_audio_devices.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_audio_devices.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_audio_formats_5a29c68a.o: ../../JuceLibraryCode/juce_audio_formats.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_audio_formats.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_audio_plugin_client_utils_35fbf7.o: ../../JuceLibraryCode/juce_audio_plugin_client_utils.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_audio_plugin_client_utils.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_audio_processors_dea3173d.o: ../../JuceLibraryCode/juce_audio_processors.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_audio_processors.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_audio_utils_c7eb679f.o: ../../JuceLibraryCode/juce_audio_utils.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_audio_utils.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_core_75b14332.o: ../../JuceLibraryCode/juce_core.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_core.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_cryptography_6de2ebff.o: ../../JuceLibraryCode/juce_cryptography.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_cryptography.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_data_structures_72d3da2c.o: ../../JuceLibraryCode/juce_data_structures.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_data_structures.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_events_d2be882c.o: ../../JuceLibraryCode/juce_events.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_events.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_graphics_9c18891e.o: ../../JuceLibraryCode/juce_graphics.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_graphics.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_gui_basics_8a6da59c.o: ../../JuceLibraryCode/juce_gui_basics.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_gui_basics.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_gui_extra_4a026f23.o: ../../JuceLibraryCode/juce_gui_extra.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_gui_extra.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_opengl_cd70b4c2.o: ../../JuceLibraryCode/juce_opengl.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_opengl.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_video_f128c512.o: ../../JuceLibraryCode/juce_video.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_video.cpp"
	@$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

-include $(OBJECTS:%.o=%.d)