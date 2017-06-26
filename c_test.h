#define c_test


void print_line( char text[])
{
    unsigned long now = millis();
    unsigned long then = millis();
    printf("\nStarting Time: %d\nText Passed: %s\nEnding Time: %d",now,text,then);

}
