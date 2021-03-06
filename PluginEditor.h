#pragma once

#include "PluginProcessor.h"
#include "JadeLookAndFeel.h"
#include "PresetHandler.h"


//==============================================================================
class TemplateAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    
    explicit TemplateAudioProcessorEditor (TemplateAudioProcessor&);
    ~TemplateAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JadeLookAndFeel m_jadeLAF;
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    TemplateAudioProcessor& m_processorRef;
    PresetComponent m_presetGUI;
#if WITH_MIDIKEYBOARD    
    MidiKeyboardComponent m_keyboard;
#endif
    // plugin specific components

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TemplateAudioProcessorEditor)
};
