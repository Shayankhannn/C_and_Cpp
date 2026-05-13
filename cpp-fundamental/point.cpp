
point operator+ (point &p1,point &p2){
    point sum = {p1.x+p2.x ,p1.y+p2.y}
    return sum;
}

ostream& operator<< (ostream& out , const point& p){
    out << "(" << p.x << "," << p.y << ")"
;
return out ;
}

int main (){
    point a ={3.5,4.5} ,b = {2.5,6.3};
    cout << "a=" << a << "b=" << b << endl ;
    cout << "sum = " << a + b  << endl ;
}

class point {
    public :
    double getx(){return x;} // accessor
    void setx (double v){x=v;} // mutator
}

// this is all just operator overlaoding and class c++ doesnt know how to compute custom class so he just compute based on what you provide so we create custom + and cout 


// Thing	Meaning
// a.setx(5)	put value into object
// a.getx()	retrieve value
// operator+	teach custom addition
// operator<<	teach custom printing