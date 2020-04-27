#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/gl.h>
#include <FL/Fl_Gl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Text_Editor.H>
#include <FL/Fl_Input.H>
class MyWindow :public Fl_Gl_Window
{
	void draw();
	int handle(int);
	
public:
	MyWindow(int x,int y,int w,int h,const char *L):Fl_Gl_Window(x,y,w,h,L){}
	
};


int main(int argc, char **argv) {
  Fl_Window *window = new Fl_Window(840,880,"simple-model-maker");
  Fl_Box *box = new Fl_Box(20,40,300,100,"Hello, World!");
  Fl_Button *button= new Fl_Button(10,10,100,100,"oepen_file");
  button->type(FL_NORMAL_BUTTON);

  button->value() ;
  
  //text editor
  Fl_Text_Editor *editor = new Fl_Text_Editor(100,200,100,100);
  Fl_Input *input= new Fl_Input(300,300,100,100,"please inout model code");
  box->box(FL_UP_BOX);
  box->labelfont(FL_BOLD+FL_ITALIC);
  box->labelsize(36);
  box->labeltype(FL_SHADOW_LABEL);
  
  
  window->end();
  window->show(argc, argv);
  
  return Fl::run();
}
