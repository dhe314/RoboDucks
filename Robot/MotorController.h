#ifndef MOTOR_H
#define MOTOR_H

class MotorController{
	public:
    MotorController();
    
    void init(int R1, int R2, int L1, int L2);

    void spin(float right, float left);
    
	private:
  
    int Rpin1;
    int Rpin2;
    int Lpin1;
    int Lpin2;
};

#endif
