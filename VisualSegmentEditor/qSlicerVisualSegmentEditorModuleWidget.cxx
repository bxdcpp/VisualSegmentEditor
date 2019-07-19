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

// Qt includes
#include <QDebug>

// SlicerQt includes
#include "qSlicerVisualSegmentEditorModuleWidget.h"
#include "ui_qSlicerVisualSegmentEditorModuleWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerVisualSegmentEditorModuleWidgetPrivate: public Ui_qSlicerVisualSegmentEditorModuleWidget
{
public:
  qSlicerVisualSegmentEditorModuleWidgetPrivate();
};

//-----------------------------------------------------------------------------
// qSlicerVisualSegmentEditorModuleWidgetPrivate methods

//-----------------------------------------------------------------------------
qSlicerVisualSegmentEditorModuleWidgetPrivate::qSlicerVisualSegmentEditorModuleWidgetPrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerVisualSegmentEditorModuleWidget methods

//-----------------------------------------------------------------------------
qSlicerVisualSegmentEditorModuleWidget::qSlicerVisualSegmentEditorModuleWidget(QWidget* _parent)
  : Superclass( _parent )
  , d_ptr( new qSlicerVisualSegmentEditorModuleWidgetPrivate )
{
}

//-----------------------------------------------------------------------------
qSlicerVisualSegmentEditorModuleWidget::~qSlicerVisualSegmentEditorModuleWidget()
{
}

//-----------------------------------------------------------------------------
void qSlicerVisualSegmentEditorModuleWidget::setup()
{
  Q_D(qSlicerVisualSegmentEditorModuleWidget);
  d->setupUi(this);
  this->Superclass::setup();
}
