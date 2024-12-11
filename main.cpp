#include <iostream>
using namespace std;
class Animal
{
    friend istream &operator >>(istream &input,Animal &obj);
    friend ostream &operator <<(ostream &output,Animal &obj);
public:
      Animal(int _size,int _life_span,int _age,string _color,string _gender)
      {
          setsize(_size);
          setlife_span(_life_span);
          setage(_age);
          setcolor(_color);
          setgender(_gender);
      }
      Animal()
      {
          size = 0;
          life_span = 0;
          age = 0;
          color = "";
          gender = "";
      }
      void setsize(int _size)
      {
          if(_size > 0 && _size < 100)
          {
            size = _size;
          }else{
            size = 0;
          }
      }
      void setlife_span(int life)
      {
          life_span = life;
      }
      void setage(int _age)
      {
          age = _age;
      }
      void setcolor(string _color)
      {
          color = _color;
      }
      void setgender(string _gender)
      {
          gender = _gender;
      }
      int getsize()
      {
          return size;
      }
      int getage()
      {
          return age;
      }
      int getlife_span()
      {
          return life_span;
      }
      string getcolor()
      {
          return color;
      }
      string getgender()
      {
          return gender;
      }
    virtual void print_color()
    {
        /*cout <<size<<" "<<life_span<<" "<<age<<" "<<
        color<<" "<<gender;*/
        cout <<color;
    }
    Animal operator =(Animal obj)
    {
        size =obj.size;
        life_span = obj.life_span;
        age = obj.age;
        color = obj.color;
        gender = obj.gender;
        return Animal(size,life_span,age,color,gender);
    }

private:
    int size;
    int life_span;
    int age;
    string color;
    string gender;
};
istream &operator >>(istream &input,Animal &obj)
{
    input >> obj.size;
    input >> obj.life_span;
    input >> obj.age;
    input >> obj.color;
    input >> obj.gender;
    return input;
}
ostream &operator <<(ostream &output,Animal &obj)
{
    output <<obj.size<<" "<<obj.life_span<<" "<<obj.age<<" "<<obj.color<<" "<<obj.gender;
    return output;
}
///----------------------------------------------------------------------------------------------
class Dog : public Animal
{
    friend istream &operator >>(istream &input,Dog &obj);
    friend ostream &operator <<(ostream &output,Dog &obj);
public:
    Dog(int s,int l,int a,string c,string g,int _tail_len,string _owner_name) : Animal(s,l,a,c,g)
    {
        settail_len(_tail_len);
        setowner_name(_owner_name);
    }
    Dog()
    {
        Animal();
        tail_len = 0;
        owner_name = "";
    }
    void settail_len(int len)
    {
        if(len > 0)
        {
            tail_len = len;
        }else{
            tail_len = 0;
        }
    }
    void setowner_name(string name)
    {
        owner_name = name;
    }
    int gettail_len()
    {
        return tail_len;
    }
    string getowner_name()
    {
        return owner_name;
    }
    virtual void print_color()
    {
        Animal : print_color();
        //cout <<" "<<tail_len<<" "<<owner_name;
    }
    Dog operator =(Dog obj)
    {
        /*int _size = obj.getsize;
        int life = obj.getlife_span;
        int _age = obj.getage;
        string _color = obj.getcolor;
        string _gender = obj.getgender;*/
        tail_len = obj.tail_len;
        owner_name = obj.owner_name;
        return Dog(); ///_size,life,_age,_color,_gender,tail_len,Owner_name
    }
private:
    int tail_len;
    string owner_name;
};
istream &operator >>(istream &input,Dog &obj)
{
    int _size;
    int life;
    int _age;
    string _color;
    string _gender;
    input >> _size;
    input >> life;
    input >> _age;
    input >> _color;
    input >> _gender;
    obj.setsize(_size);
    obj.setlife_span(life);
    obj.setage(_age);
    obj.setcolor(_color);
    obj.setgender(_gender);
    input >> obj.tail_len;
    input >> obj.owner_name;
    return input;
}
ostream &operator <<(ostream &output,Dog &obj)
{
    output <<obj.getsize()<<" "<<obj.getlife_span()<<" "<<obj.getage()<<" "<<obj.getcolor()<<" "<<obj.getgender()<<" ";
    output <<obj.tail_len<<" "<<obj.owner_name;
    return output;
}
///----------------------------------------------------------------------------------------------
class Cat : public Animal
{
    friend istream &operator >>(istream &input,Cat &obj);
    friend ostream &operator <<(ostream &output,Cat &obj);
public:
      Cat(int s,int l,int a,string c,string g,string toy,int number) : Animal(s,l,a,c,g)
      {
          setfavorite_toy(toy);
          setnumber_of_teeth(number);
      }
      Cat()
      {
          Animal();
          favorite_toy = "";
          number_of_teeth = 0;
      }
      void setfavorite_toy(string toy)
      {
          favorite_toy = toy;
      }
      void setnumber_of_teeth(int number)
      {
          if(number > 0)
          {
            number_of_teeth = number;
          }else{
            number_of_teeth = 0;
          }
      }
    string getfavorite_toy()
      {
          return favorite_toy;
      }
      int getnumber_of_teeth()
      {
          return number_of_teeth;
      }
        virtual void print_color()
        {
            Animal : print_color();
            //cout <<favorite_toy<<" "<<number_of_teeth;
        }
        Cat operator =(Cat obj)
        {
            favorite_toy = obj.favorite_toy;
            number_of_teeth = obj.number_of_teeth;
            return Cat();
        }
private:
    string favorite_toy;
    int number_of_teeth;
};
istream &operator >>(istream &input,Cat &obj)
{
    int _size;
    int life;
    int _age;
    string _color;
    string _gender;
    input >> obj.favorite_toy;
    input >> obj.number_of_teeth;
    input >> _size;
    input >> life;
    input >> _age;
    input >> _color;
    input >> _gender;
    obj.setsize(_size);
    obj.setlife_span(life);
    obj.setage(_age);
    obj.setcolor(_color);
    obj.setgender(_gender);
    return input;
}
ostream &operator <<(ostream &output,Cat &obj)
{
    output <<obj.favorite_toy<<" "<<obj.number_of_teeth<<" ";
    output <<obj.getsize()<<" "<<obj.getlife_span()<<" "<<obj.getage()<<" "<<obj.getcolor()<<" "<<obj.getgender();
    return output;
}
///----------------------------------------------------------------------------------------------
class Snake : public Animal
{
    friend istream &operator >>(istream &input,Snake &obj);
    friend ostream &operator <<(ostream &output,Snake &obj);
public:
      Snake(int s,int l,int a,string c,string g,bool poisonous,float _len) : Animal(s,l,a,c,g)
      {
          setis_poisonous(poisonous);
          setlen(_len);
      }
      Snake()
      {
          Animal();
          bool is_poisonous = false;
          len = 0;
      }
      void setis_poisonous(bool is)
      {
          is_poisonous = is;
      }
      void setlen(float _len)
      {
          if(_len > 0)
          {
              len = -len;
          }else{
            len = 0;
          }
      }
      bool getis_poisonous()
      {
          return is_poisonous;
      }
      float getlen()
      {
          return len;
      }
    virtual void print_color()
    {
        Animal : print_color();
        //cout <<" "<< is_poisonous <<" "<< len;
    }
    Snake operator =(Snake obj)
    {
        is_poisonous = obj.is_poisonous;
        len = obj.len;
        return Snake();
    }
private:
    bool is_poisonous;
    float len;
};
istream &operator >>(istream &input,Snake &obj)
{
    int _size;
    int life;
    int _age;
    string _color;
    string _gender;
    input >> obj.is_poisonous;
    input >> obj.len;
    input >> _size;
    input >> life;
    input >> _age;
    input >> _color;
    input >> _gender;
    obj.setsize(_size);
    obj.setlife_span(life);
    obj.setage(_age);
    obj.setcolor(_color);
    obj.setgender(_gender);
    return input;
}
ostream &operator <<(ostream &output,Snake &obj)
{
    output <<obj.is_poisonous<<" "<<obj.len<<" ";
    output <<obj.getsize()<<" "<<obj.getlife_span()<<" "<<obj.getage()<<" "<<obj.getcolor()<<" "<<obj.getgender();
    return output;
}

///----------------------------------------------------------------------------------------------
int main() {
    int D;
    int C;
    int S;
    cin >> D;
    cin >> C;
    cin >> S;

    Dog animal1[D];
    Cat animal2[C];
    Snake animal3[S];

    for(int i=0;i<D;i++)
    {
        cin >> animal1[i];
    }
    for(int i=0;i<C;i++)
    {
        cin >> animal2[i];
    }
    for(int i=0;i<S;i++)
    {
        cin >> animal3[i];
    }


    for(int i=0;i<D;i++)
    {
        cout << animal1[i];
    }
    for(int i=0;i<C;i++)
    {
        cout << animal2[i];
    }
    for(int i=0;i<S;i++)
    {
        cout << animal3[i];
    }
    return 0;
}
