//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class NSString, UIImageView, UILabel, UIProgressView;

@interface MBKUnlockAnimationView : UIView <CAAnimationDelegate>
{
    UIImageView *_roadImageView;
    UIImageView *_leftWheelImageView;
    UIImageView *_rightWheelImageView;
    UIImageView *_bicycleShelfImageView;
    UIImageView *_finishImageView;
    UIProgressView *_progressView;
    UILabel *_progressLabel;
}

@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIImageView *finishImageView; // @synthesize finishImageView=_finishImageView;
@property(retain, nonatomic) UIImageView *bicycleShelfImageView; // @synthesize bicycleShelfImageView=_bicycleShelfImageView;
@property(retain, nonatomic) UIImageView *rightWheelImageView; // @synthesize rightWheelImageView=_rightWheelImageView;
@property(retain, nonatomic) UIImageView *leftWheelImageView; // @synthesize leftWheelImageView=_leftWheelImageView;
@property(retain, nonatomic) UIImageView *roadImageView; // @synthesize roadImageView=_roadImageView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateProgressLabelEx;
- (void)setProgressValue:(float)arg1;
- (void)removeTransformAnimation;
- (void)transformAnimatioin;
- (void)removeBikeRunAnimation;
- (void)startBikeRunAnimation;
- (void)stopLoading:(id)arg1;
- (void)startLoading:(id)arg1;
- (void)stopRoadAnimation;
- (void)startRoadAnimation;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

