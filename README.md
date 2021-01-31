# AudioDevTemplate
JUCE AudioPlugIn Template

Dependecies:
TGMTools: PresetHandler.cpp and.h

CMake Basic Files from AudioDev.

## Purpose
This template provides a first step for effects and synth. 


## Usage

1. Create a new directory (better create a new repository in GitHub)
2. (if Github): Checkout your new project
3. copy template files
4. rename all instances of "Template" in the Files with something apropriate 
    (use a renaming-tool like   "sed -i 's/Template/YourNewProjectName/g' *.*")
    change/rename line 7 in CMakeLists.txt, since this was not renamed (CAPITILIZED)
5. Add your new subdiretory to the master CMakeLists.txt file
6. Start coding your plugin


## Options:
* In the CMakeLists.txt you can add some defines (FACTORY_PRESETS and WITH_MIDIKEYBOARD). The second is recommended for synth.














