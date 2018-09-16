#ifndef MOTOR_H
#define MOTOR_H

class MotorController{
	public:
    MotorController();
    
    void forward();
    void back();
    void right();
    void left();
    void stop();
    void init(int r1, int l1, int r2, int l2, int rs, int ls);
    
	private:
    int Rpin1;
    int Rpin2;
    int Lpin1;
    int Lpin2;

    int Rspeed;
    int Lspeed;
};

#endif
