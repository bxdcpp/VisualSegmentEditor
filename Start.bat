@echo off

:: 以下两句只有一句有效，取决于Slicer做CMake时的主程序名称SlicerApp_APPLICATION_NAME 
..\Slicer-build\Slicer-build\Slicer.exe --VisualStudio .\..\VisualSegmentEditor-build\VisualSegmentEditor.sln
..\Slicer-build\Slicer-build\Visual3D.exe --VisualStudio .\..\VisualSegmentEditor-build\VisualSegmentEditor.sln