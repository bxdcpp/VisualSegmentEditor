/*==============================================================================

  Program: 3D Slicer

  Copyright (c) Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Jean-Christophe Fillion-Robin, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

// FooBar Widgets includes
#include "qSlicerVisualSegmentEditorFooBarWidget.h"
#include "ui_qSlicerVisualSegmentEditorFooBarWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_VisualSegmentEditor
class qSlicerVisualSegmentEditorFooBarWidgetPrivate
  : public Ui_qSlicerVisualSegmentEditorFooBarWidget
{
  Q_DECLARE_PUBLIC(qSlicerVisualSegmentEditorFooBarWidget);
protected:
  qSlicerVisualSegmentEditorFooBarWidget* const q_ptr;

public:
  qSlicerVisualSegmentEditorFooBarWidgetPrivate(
    qSlicerVisualSegmentEditorFooBarWidget& object);
  virtual void setupUi(qSlicerVisualSegmentEditorFooBarWidget*);
};

// --------------------------------------------------------------------------
qSlicerVisualSegmentEditorFooBarWidgetPrivate
::qSlicerVisualSegmentEditorFooBarWidgetPrivate(
  qSlicerVisualSegmentEditorFooBarWidget& object)
  : q_ptr(&object)
{
}

// --------------------------------------------------------------------------
void qSlicerVisualSegmentEditorFooBarWidgetPrivate
::setupUi(qSlicerVisualSegmentEditorFooBarWidget* widget)
{
  this->Ui_qSlicerVisualSegmentEditorFooBarWidget::setupUi(widget);
}

//-----------------------------------------------------------------------------
// qSlicerVisualSegmentEditorFooBarWidget methods

//-----------------------------------------------------------------------------
qSlicerVisualSegmentEditorFooBarWidget
::qSlicerVisualSegmentEditorFooBarWidget(QWidget* parentWidget)
  : Superclass( parentWidget )
  , d_ptr( new qSlicerVisualSegmentEditorFooBarWidgetPrivate(*this) )
{
  Q_D(qSlicerVisualSegmentEditorFooBarWidget);
  d->setupUi(this);
}

//-----------------------------------------------------------------------------
qSlicerVisualSegmentEditorFooBarWidget
::~qSlicerVisualSegmentEditorFooBarWidget()
{
}
