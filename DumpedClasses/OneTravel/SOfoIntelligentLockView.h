//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SOfoBaseLockView.h"

#import "ONEQRScanDelegate.h"

@class NSString, ONEAlertView, ONEQRScanView, ONETimer, SOfoShadowContainerView, UIView;

@interface SOfoIntelligentLockView : SOfoBaseLockView <ONEQRScanDelegate>
{
    _Bool _capturedOneResult;
    SOfoShadowContainerView *_containerView;
    UIView *_scancerView;
    UIView *_bottomActionView;
    ONEQRScanView *_scancer;
    ONETimer *_scanTimer;
    UIView *_scancerAnimationView;
    ONEAlertView *_scanTimeOutAlert;
    NSString *_lastPlate;
}

@property(retain, nonatomic) NSString *lastPlate; // @synthesize lastPlate=_lastPlate;
@property(retain, nonatomic) ONEAlertView *scanTimeOutAlert; // @synthesize scanTimeOutAlert=_scanTimeOutAlert;
@property(retain, nonatomic) UIView *scancerAnimationView; // @synthesize scancerAnimationView=_scancerAnimationView;
@property(retain, nonatomic) ONETimer *scanTimer; // @synthesize scanTimer=_scanTimer;
@property(nonatomic) _Bool capturedOneResult; // @synthesize capturedOneResult=_capturedOneResult;
@property(retain, nonatomic) ONEQRScanView *scancer; // @synthesize scancer=_scancer;
@property(retain, nonatomic) UIView *bottomActionView; // @synthesize bottomActionView=_bottomActionView;
@property(retain, nonatomic) UIView *scancerView; // @synthesize scancerView=_scancerView;
@property(retain, nonatomic) SOfoShadowContainerView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)showScanTimeOutAlert;
- (id)catchOfoPlateWithQRMessage:(id)arg1;
- (void)scanView:(id)arg1 pickUpMessage:(id)arg2;
- (_Bool)isShowingFullScreenAd;
- (_Bool)scanerShouldWork;
- (void)willBecomeReactive;
- (void)willBecomeActive;
- (void)didClickedClosedButton;
- (void)didClickedBottomButton;
- (void)stopScanning;
- (void)startScanning;
- (void)scanToSendOrderSucceed:(_Bool)arg1;
- (void)layoutSubContentViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

