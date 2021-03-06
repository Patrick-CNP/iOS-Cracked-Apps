//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, TBDouble11ErrorView, TBModelStatusInfo, UIView;

@interface TBModelStatusHandler : NSObject
{
    TBModelStatusInfo *_statusInfo;
    id <TBModelStatusDelegate> _delegate;
    CDUnknownBlockType _selectorForErrorBlock;
    CDUnknownBlockType _selectorForEmptyBlock;
    TBDouble11ErrorView *_double11ErrorView;
    NSError *_error;
    UIView *_errorView;
}

@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) TBDouble11ErrorView *double11ErrorView; // @synthesize double11ErrorView=_double11ErrorView;
@property(copy, nonatomic) CDUnknownBlockType selectorForEmptyBlock; // @synthesize selectorForEmptyBlock=_selectorForEmptyBlock;
@property(copy, nonatomic) CDUnknownBlockType selectorForErrorBlock; // @synthesize selectorForErrorBlock=_selectorForErrorBlock;
@property(nonatomic) id <TBModelStatusDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBModelStatusInfo *statusInfo; // @synthesize statusInfo=_statusInfo;
- (void).cxx_destruct;
- (void)removeStatusViewFromView:(id)arg1 error:(id)arg2;
- (void)removeStatusViewFromView:(id)arg1;
- (void)removeStatusViewFromView:(id)arg1 hideLoading:(_Bool)arg2;
- (void)hideLoadingView;
- (void)showLoadingViewInView:(id)arg1 frame:(struct CGRect)arg2;
- (void)bringErrorViewToFront:(id)arg1 andParentView:(id)arg2;
- (id)showEmptyViewInView:(id)arg1 frame:(struct CGRect)arg2;
- (id)showViewforError:(id)arg1 inView:(id)arg2 frame:(struct CGRect)arg3 actionTarget:(id)arg4 actionSelector:(SEL)arg5;
- (id)showViewforError:(id)arg1 inView:(id)arg2 frame:(struct CGRect)arg3;
- (void)commitError:(id)arg1 withActionTarget:(id)arg2;
- (_Bool)isFestivalOn;
- (id)loadingView;
- (id)emptyViewWithFrame:(struct CGRect)arg1;
- (void)doCustomErrorAction;
- (void)doCustomEmptyAction;
- (void)feedbackBtnCheckForErrorView:(id)arg1;
- (id)errorViewWithFrame:(struct CGRect)arg1 error:(id)arg2 actionTarget:(id)arg3 actionSelector:(SEL)arg4;
- (id)errorViewWithFrame:(struct CGRect)arg1 error:(id)arg2;
- (void)toastForEmptyToView:(id)arg1;
- (void)toastForError:(id)arg1 toView:(id)arg2;
- (void)showError:(id)arg1 InView:(id)arg2 frame:(struct CGRect)arg3;
- (void)showEmptyInView:(id)arg1 frame:(struct CGRect)arg2;
- (void)bringStatusViewToFront;
- (void)dismissStatusView;
- (id)initWithStatusInfo:(id)arg1;
- (id)initWithStatusInfo:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

@end

