//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MCRulerUnitObject : NSObject
{
    float _minimumValue;
    float _maximumValue;
    unsigned long long _stepCount;
    unsigned long long _stepCountPerSection;
}

+ (id)unitObjectWithMinValue:(float)arg1 maxValue:(float)arg2 stepCount:(unsigned long long)arg3 stepCountPerSection:(unsigned long long)arg4;
+ (id)placeholderObjectWithStepCount:(unsigned long long)arg1 stepCountPerSection:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long stepCountPerSection; // @synthesize stepCountPerSection=_stepCountPerSection;
@property(readonly, nonatomic) unsigned long long stepCount; // @synthesize stepCount=_stepCount;
@property(readonly, nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(readonly, nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
- (_Bool)isEqualToUnitObject:(id)arg1;

@end

