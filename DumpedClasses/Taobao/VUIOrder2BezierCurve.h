//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VUIACurve.h"

@class VUIVector3;

@interface VUIOrder2BezierCurve : VUIACurve
{
    VUIVector3 *_mPoint1;
    VUIVector3 *_mPoint2;
    VUIVector3 *_mControlPoint;
    VUIVector3 *_mTmpPoint1;
    VUIVector3 *_mTmpPoint2;
    VUIVector3 *_mTmpPoint3;
}

@property(retain, nonatomic) VUIVector3 *mTmpPoint3; // @synthesize mTmpPoint3=_mTmpPoint3;
@property(retain, nonatomic) VUIVector3 *mTmpPoint2; // @synthesize mTmpPoint2=_mTmpPoint2;
@property(retain, nonatomic) VUIVector3 *mTmpPoint1; // @synthesize mTmpPoint1=_mTmpPoint1;
@property(retain, nonatomic) VUIVector3 *mControlPoint; // @synthesize mControlPoint=_mControlPoint;
@property(retain, nonatomic) VUIVector3 *mPoint2; // @synthesize mPoint2=_mPoint2;
@property(retain, nonatomic) VUIVector3 *mPoint1; // @synthesize mPoint1=_mPoint1;
- (void).cxx_destruct;
- (id)getCurrentPoint:(id)arg1 t:(float)arg2;
- (id)initWithPoint1:(id)arg1 controlPoint:(id)arg2 point2:(id)arg3;

@end
