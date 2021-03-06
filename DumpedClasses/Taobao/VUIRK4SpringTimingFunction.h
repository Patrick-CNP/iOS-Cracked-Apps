//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VUITimingFunction.h"

@class NSMutableArray;

@interface VUIRK4SpringTimingFunction : VUITimingFunction
{
    NSMutableArray *_result;
}

@property(retain, nonatomic) NSMutableArray *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (double)interpolation:(double)arg1 b:(double)arg2 c:(double)arg3 d:(double)arg4;
- (double)springAccelerationForState:(CDStruct_3c058996)arg1;
- (CDStruct_2c43369c)springEvaluateState:(CDStruct_3c058996)arg1;
- (CDStruct_2c43369c)springEvaluateStateWithDerivative:(CDStruct_3c058996)arg1 dt:(double)arg2 derivative:(CDStruct_2c43369c)arg3;
- (CDStruct_3c058996)springIntegrateState:(CDStruct_3c058996)arg1 speed:(double)arg2;
- (double)normalizeSpringValue:(double)arg1;
- (_Bool)lerpRK4Spring:(double *)arg1 tension:(double)arg2 friction:(double)arg3 velocity:(double *)arg4 delta:(double)arg5;
- (void)RK4SpringAnimation:(double)arg1 friction:(double)arg2 initialVelocity:(double)arg3 delta:(double)arg4;
- (id)initWithTension:(double)arg1 friction:(double)arg2 initialVelocity:(double)arg3 delta:(double)arg4;

@end

