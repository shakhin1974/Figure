#pragma once
#include<iostream>
#include<string>
using namespace std;
class Figure
{	float a; float b; float c; float d;
public:
	Figure(float _a) : a(_a) {}
	Figure(float _a, float _b) : a(_a), b(_b) {}
	int kvadr() { return a * a; }
	int pryam() { return a * b; }
	Figure(float _a, float _b, float _c) 
		: a(_a), b(_b), c(_c) {}
	float treug() {
		float p = (a + b + c) / 2;
		return 	sqrt(p * (p - a) * (p - b) * (p - c));
	}
	Figure(float _a, float _b, float _c, float _d) 
		: a(_a), b(_b), c(_c), d(_d) {}
	float piramida()
	{
		float p = (a + b + c) / 2;
		return 	sqrt(p * (p - a) * (p - b) * (p - c)) * d / 3;
	}
};
