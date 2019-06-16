#include "draw_shape.h"

using namespace std;

enum Choice {DEFAULT_, RECT_, UT_, DT_, DIA_};
enum Choice2 {DEFAULT2_, ADD_, DR_, DLT_, DMP_, RSZ_, QT_};

static map<string, Choice> mapChoice;
static map<string, Choice2> mapChoice2;

int main() {
    vector<Shape*> shapes;

    mapChoice["rect"] = RECT_;
    mapChoice["tri_up"] = UT_;
    mapChoice["tri_down"] = DT_;
    mapChoice["diamond"] = DIA_;

    mapChoice2["add"] = ADD_;
    mapChoice2["draw"] = DR_;
    mapChoice2["delete"] = DLT_;
    mapChoice2["dump"] = DMP_;
    mapChoice2["resize"] = RSZ_;
    mapChoice2["quit"] = QT_;

    size_t row, col;
    cin >> row >> col;
    Canvas canvas(row, col);
    canvas.Print();

    int cx,cy,w,h;
    int ix = 0;
    char cb;
    string type = "\0";

    while(true) {
        string tok;
        cin >> tok;
        switch(mapChoice2[tok]) {
            case ADD_:
                cin >> type;

                switch(mapChoice[type]) {
                    case RECT_:
                        cin >> cx >> cy >> w >> h >> cb;
                        shapes.push_back(new Rectangle(w,h));
                        shapes[ix++]->setXYB(cx,cy,cb);
                        continue;
                    case UT_:
                        cin >> cx >> cy >> h >> cb;
                        shapes.push_back(new UpTriangle(h));
                        shapes[ix++]->setXYB(cx,cy,cb);
                        continue;
                    case DT_:
                        cin >> cx >> cy >> h >> cb;
                        shapes.push_back(new DownTriangle(h));
                        shapes[ix++]->setXYB(cx,cy,cb);
                        continue;
                    case DIA_:
                        cin >> cx >> cy >> h >> cb;
                        shapes.push_back(new Diamond(h));
                        shapes[ix++]->setXYB(cx,cy,cb);
                        continue;
                    default:
                        cout << "choose again" << endl;
                        continue;
                }
                continue;
            case DR_:
                canvas.Clear();
                for(int i = 0; i<shapes.size(); ++i)
                    shapes[i]->Draw(&canvas);
                canvas.Print();
                continue;
            case DLT_:
                int ix2;
                cin >> ix2;
                if(ix2 <= ix) {
                    shapes.erase(shapes.begin() + ix2);
                    ix--;
                } else
                    cout << "no index found" << endl;
                continue;
            case DMP_:
                for(int i=0; i<shapes.size(); i++)
                    cout << i << ": " << shapes[i]->getInfo() << endl;
                continue;
            case RSZ_:
                int row, col;
                cin >> row >> col;
                canvas.Resize(row, col);
                continue;
            case QT_:
                exit(0);
            default:
                cout << "please type again,,," << endl;
        }
    }

    for(int i=0; i<shapes.size(); ++i)
        delete shapes[i];
    shapes.clear();

    return 0;
}
