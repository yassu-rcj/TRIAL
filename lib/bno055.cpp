/* BNO055用変数 */
#include <Adafruit_BNO055.h>
#include <Arduino.h>
Adafruit_BNO055 bno = Adafruit_BNO055(55, 0x28, &Wire);

void get_bno055_data(void)
{
    // センサフュージョンによる方向推定値の取得と表示
    imu::Vector<3> euler = bno.getVector(Adafruit_BNO055::VECTOR_EULER);
    Serial.print("  DIR_xyz:");
    Serial.print(euler.x());
    Serial.print(", ");
    Serial.print(euler.y());
    Serial.print(", ");
    Serial.print(euler.z());
    Serial.println();
}

void setup()
{
    Serial.begin(115200); // シリアルモニター表示
    delay(100);
}
void loop()
{
}