//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMBaseViewController.h"

@class FMMeetupViewComponent, MSWeakTimer;

@interface FMMeetupViewController : FMBaseViewController
{
    FMMeetupViewComponent *_component;
    MSWeakTimer *_roopTimer;
}

@property(retain, nonatomic) MSWeakTimer *roopTimer; // @synthesize roopTimer=_roopTimer;
@property(retain, nonatomic) FMMeetupViewComponent *component; // @synthesize component=_component;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)leftAction:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)repeatRefresh;
- (void)viewDidLoad;
- (void)setupNavigationBar;
- (void)loadView;
- (id)initWithURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;

@end

