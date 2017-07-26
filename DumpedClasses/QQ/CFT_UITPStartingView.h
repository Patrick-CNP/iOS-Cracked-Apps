//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIAlertViewDelegate.h"
#import "UITPStartingDelegate.h"

@class CFT_UILoadingView, NSString, UIEnteringView, UIViewController;

@interface CFT_UITPStartingView : UIView <UIAlertViewDelegate, UITPStartingDelegate>
{
    UIEnteringView *_enteringView;
    CFT_UILoadingView *_activityView;
    _Bool superviewSupportRightDragToGoBack;
    _Bool _isFirstEnterView;
    int _nextVcType;
    int _indicatorType;
    int _popin_ani_type;
    UIViewController *_rootVC;
    UIViewController *_nextVC;
    id _engine;
    NSString *_tipsString;
    UIViewController *_tmpNextVC;
}

+ (id)viewWithRootVc:(id)arg1;
@property(retain, nonatomic) UIViewController *tmpNextVC; // @synthesize tmpNextVC=_tmpNextVC;
@property(nonatomic) _Bool isFirstEnterView; // @synthesize isFirstEnterView=_isFirstEnterView;
@property(retain, nonatomic) NSString *tipsString; // @synthesize tipsString=_tipsString;
@property(nonatomic) int popin_ani_type; // @synthesize popin_ani_type=_popin_ani_type;
@property(nonatomic) int indicatorType; // @synthesize indicatorType=_indicatorType;
@property(nonatomic) int nextVcType; // @synthesize nextVcType=_nextVcType;
@property(retain, nonatomic) id engine; // @synthesize engine=_engine;
@property(retain, nonatomic) UIViewController *nextVC; // @synthesize nextVC=_nextVC;
@property(nonatomic) __weak UIViewController *rootVC; // @synthesize rootVC=_rootVC;
- (void).cxx_destruct;
- (void)notifyChangeNextVc:(id)arg1;
- (void)notifyDismiss:(id)arg1;
- (void)notifyEndIndicator;
- (void)notifyRestartIndicator:(id)arg1;
- (void)notifyStartIndicator:(id)arg1;
- (void)dealloc;
- (void)show;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
