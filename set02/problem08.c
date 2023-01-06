
#include<iostream>
#include<algorithm>
using namespace std;

//triangle structure
struct Triangle
{
    int side1;
    int side2;
    int side3;
};

//function declaration to calculate area of triangle
float areaCalculate(Triangle triangle);

//function declaration to find the smallest triangle
Triangle findSmallestTriangle(Triangle triangle[], int n);

//Driver function
int main()
{
    Triangle triangles[4];
    //input the sides of the 4 triangles
    for(int i=0; i<4; i++)
    {
        cin>>triangles[I].side1>>triangles[i].side2>>triangles[i].side3;
    }

    //find smallest triangle
    Triangle smallestTriangle = findSmallestTriangle(triangles, 4);

    //print the sides of smallest triangle
    cout<<smallestTriangle.side1<<" "<<smallestTriangle.side2<<" "<<smallestTriangle.side3;
    return 0;
}

//function definition to calculate area of triangle
float areaCalculate(Triangle triangle)
{
    int semiPerimeter = (triangle.side1 + triangle.side2 + triangle.side3)/2;
    float area = sqrt(semiPerimeter*(semiPerimeter-triangle.side1)*(semiPerimeter-triangle.side2)*(semiPerimeter-triangle.side3));
    return area;
}

//function definition to find the smallest triangle
Triangle findSmallestTriangle(Triangle triangle[], int n)
{
    Triangle smallest = triangle[0];
    float smallestArea = areaCalculate(smallest);

    for(int i=1; i<n; i++)
    {
        float area = areaCalculate(triangle[i]);
        if(area < smallestArea)
        {
            smallest = triangle[i];
            smallestArea = area;
        }
    }
    return smallest;
}