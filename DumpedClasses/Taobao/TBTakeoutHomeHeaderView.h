//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBTakeoutNewViewModelDelegate.h"

@class NSString, TBTakeoutActivityView, TBTakeoutFootPrintView, TBTakeoutHomeBannerView, TBTakeoutHomeCacheService, TBTakeoutHomeCategoryView, TBTakeoutHomeNewsReminderView, TBTakeoutHomeRecommendView, TBTakeoutNewsView, TBTakeoutOrderRecommendTopViewModel;

@interface TBTakeoutHomeHeaderView : UIView <TBTakeoutNewViewModelDelegate>
{
    _Bool _needActivityView;
    _Bool _isFirstReminder;
    TBTakeoutActivityView *_activityView;
    CDUnknownBlockType _activityViewOnClickBlock;
    CDUnknownBlockType _onDismissNotificationClickBlock;
    TBTakeoutHomeBannerView *_bannerView;
    TBTakeoutNewsView *_newsView;
    TBTakeoutHomeCategoryView *_categoryView;
    TBTakeoutHomeRecommendView *_recommendView;
    TBTakeoutOrderRecommendTopViewModel *_orderRecommendTopViewModel;
    UIView *_homeListHeaderView;
    TBTakeoutFootPrintView *_footprintView;
    UIView *_weexView;
    TBTakeoutHomeNewsReminderView *_homeNewsReminderView;
    TBTakeoutHomeCacheService *_cacheService;
}

@property(nonatomic) _Bool isFirstReminder; // @synthesize isFirstReminder=_isFirstReminder;
@property(retain, nonatomic) TBTakeoutHomeCacheService *cacheService; // @synthesize cacheService=_cacheService;
@property(retain, nonatomic) TBTakeoutHomeNewsReminderView *homeNewsReminderView; // @synthesize homeNewsReminderView=_homeNewsReminderView;
@property(retain, nonatomic) UIView *weexView; // @synthesize weexView=_weexView;
@property(retain, nonatomic) TBTakeoutFootPrintView *footprintView; // @synthesize footprintView=_footprintView;
@property(retain, nonatomic) UIView *homeListHeaderView; // @synthesize homeListHeaderView=_homeListHeaderView;
@property(retain, nonatomic) TBTakeoutOrderRecommendTopViewModel *orderRecommendTopViewModel; // @synthesize orderRecommendTopViewModel=_orderRecommendTopViewModel;
@property(retain, nonatomic) TBTakeoutHomeRecommendView *recommendView; // @synthesize recommendView=_recommendView;
@property(retain, nonatomic) TBTakeoutHomeCategoryView *categoryView; // @synthesize categoryView=_categoryView;
@property(retain, nonatomic) TBTakeoutNewsView *newsView; // @synthesize newsView=_newsView;
@property(retain, nonatomic) TBTakeoutHomeBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(copy, nonatomic) CDUnknownBlockType onDismissNotificationClickBlock; // @synthesize onDismissNotificationClickBlock=_onDismissNotificationClickBlock;
@property(copy, nonatomic) CDUnknownBlockType activityViewOnClickBlock; // @synthesize activityViewOnClickBlock=_activityViewOnClickBlock;
@property(retain, nonatomic) TBTakeoutActivityView *activityView; // @synthesize activityView=_activityView;
@property(nonatomic, getter=isActivityViewShowing) _Bool needActivityView; // @synthesize needActivityView=_needActivityView;
- (void).cxx_destruct;
- (void)setWeeXView:(id)arg1;
- (void)viewModel:(id)arg1 didLoadError:(id)arg2;
- (void)viewModelDidLoad:(id)arg1;
- (_Bool)checkHomeNewsReminder;
- (void)layoutSubviews;
- (void)commonInit;
- (void)refreshAll:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)stopTimer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

