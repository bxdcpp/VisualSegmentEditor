cmake_minimum_required(VERSION 3.13.4)

project(VisualSegmentEditor)

#-----------------------------------------------------------------------------
# Extension meta-information
set(EXTENSION_HOMEPAGE "http://slicer.org/slicerWiki/index.php/Documentation/Nightly/Extensions/VisualSegmentEditor")
set(EXTENSION_CATEGORY "Visual3D")
set(EXTENSION_CONTRIBUTORS "XinDong (Visual3d)")
set(EXTENSION_DESCRIPTION "This is an example of a VVisualSegmentEditor")
set(EXTENSION_ICONURL "http://www.example.com/Slicer/Extensions/VisualSegmentEditor.png")
set(EXTENSION_SCREENSHOTURLS "http://www.example.com/Slicer/Extensions/VisualSegmentEditor/Screenshots/1.png")
set(EXTENSION_DEPENDS "NA") # Specified as a space separated string, a list or 'NA' if any

#-----------------------------------------------------------------------------
# Extension dependencies
find_package(Slicer REQUIRED)
include(${Slicer_USE_FILE})

#-----------------------------------------------------------------------------
# Extension modules
add_subdirectory(VisualSegmentEditor)
## NEXT_MODULE

#-----------------------------------------------------------------------------
include(${Slicer_EXTENSION_GENERATE_CONFIG})
include(${Slicer_EXTENSION_CPACK})
