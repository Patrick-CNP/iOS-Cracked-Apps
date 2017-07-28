//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAPanGesView.h"

#import "FAMobileLiveDailyTaskViewDelegate.h"

@class NSString;

@interface FAMobileLiveDailyTaskShowView : FAPanGesView <FAMobileLiveDailyTaskViewDelegate>
{
    CDUnknownBlockType _viewWillBackHandler;
    CDUnknownBlockType _beginShowView;
    CDUnknownBlockType _endShowView;
    FAPanGesView *_contentView;
}

@property(retain, nonatomic) FAPanGesView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType endShowView; // @synthesize endShowView=_endShowView;
@property(copy, nonatomic) CDUnknownBlockType beginShowView; // @synthesize beginShowView=_beginShowView;
@property(copy, nonatomic) CDUnknownBlockType viewWillBackHandler; // @synthesize viewWillBackHandler=_viewWillBackHandler;
- (void).cxx_destruct;
- (void)dealTapBackButton;
- (void)dealTapCloseButton;
- (void)dealDismissHudView:(_Bool)arg1;
- (void)dealShowWithStatusMesg:(id)arg1;
- (void)dealShowMessageWithMsg:(id)arg1 duration:(double)arg2;
- (void)configMainView;
- (void)hideAndRemoveSelfWithDuration:(double)arg1;
- (void)tapTheView;
- (void)addToView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
