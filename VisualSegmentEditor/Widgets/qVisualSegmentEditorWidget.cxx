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
#include "qVisualSegmentEditorWidget.h"
#include "ui_qVisualSegmentEditorWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_VisualSegmentEditor
class qVisualSegmentEditorWidgetPrivate
  : public Ui_qVisualSegmentEditorWidget 
{
  Q_DECLARE_PUBLIC(qVisualSegmentEditorWidget );
protected:
  qVisualSegmentEditorWidget * const q_ptr;

public:
  qVisualSegmentEditorWidgetPrivate(
    qVisualSegmentEditorWidget & object);
  virtual void setupUi(qVisualSegmentEditorWidget *);
};

// --------------------------------------------------------------------------
qVisualSegmentEditorWidgetPrivate
::qVisualSegmentEditorWidgetPrivate(
  qVisualSegmentEditorWidget & object)
  : q_ptr(&object)
{
}

// --------------------------------------------------------------------------
void qVisualSegmentEditorWidgetPrivate
::setupUi(qVisualSegmentEditorWidget * widget)
{
  this->Ui_qVisualSegmentEditorWidget ::setupUi(widget);
}

//-----------------------------------------------------------------------------
// qVisualSegmentEditorWidget  methods

//-----------------------------------------------------------------------------
qVisualSegmentEditorWidget 
::qVisualSegmentEditorWidget (QWidget* parentWidget)
  : Superclass( parentWidget )
  , d_ptr( new qVisualSegmentEditorWidgetPrivate(*this) )
{
  Q_D(qVisualSegmentEditorWidget );
  d->setupUi(this);
}

//-----------------------------------------------------------------------------
qVisualSegmentEditorWidget 
::~qVisualSegmentEditorWidget ()
{
}
