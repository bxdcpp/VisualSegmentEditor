/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

// VisualSegmentEditor Logic includes
#include <vtkSlicerVisualSegmentEditorLogic.h>

// VisualSegmentEditor includes
#include "qSlicerVisualSegmentEditorModule.h"
#include "qSlicerVisualSegmentEditorModuleWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerVisualSegmentEditorModulePrivate
{
public:
  qSlicerVisualSegmentEditorModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerVisualSegmentEditorModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerVisualSegmentEditorModulePrivate::qSlicerVisualSegmentEditorModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerVisualSegmentEditorModule methods

//-----------------------------------------------------------------------------
qSlicerVisualSegmentEditorModule::qSlicerVisualSegmentEditorModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerVisualSegmentEditorModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerVisualSegmentEditorModule::~qSlicerVisualSegmentEditorModule()
{
}

//-----------------------------------------------------------------------------
QString qSlicerVisualSegmentEditorModule::helpText() const
{
  return "This is a loadable module that can be bundled in an extension";
}

//-----------------------------------------------------------------------------
QString qSlicerVisualSegmentEditorModule::acknowledgementText() const
{
  return "This work was partially funded by NIH grant NXNNXXNNNNNN-NNXN";
}

//-----------------------------------------------------------------------------
QStringList qSlicerVisualSegmentEditorModule::contributors() const
{
  QStringList moduleContributors;
  moduleContributors << QString("John Doe (AnyWare Corp.)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerVisualSegmentEditorModule::icon() const
{
  return QIcon(":/Icons/VisualSegmentEditor.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerVisualSegmentEditorModule::categories() const
{
  return QStringList() << "Visual3D";
}

//-----------------------------------------------------------------------------
QStringList qSlicerVisualSegmentEditorModule::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerVisualSegmentEditorModule::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation* qSlicerVisualSegmentEditorModule
::createWidgetRepresentation()
{
  return new qSlicerVisualSegmentEditorModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerVisualSegmentEditorModule::createLogic()
{
  return vtkSlicerVisualSegmentEditorLogic::New();
}
