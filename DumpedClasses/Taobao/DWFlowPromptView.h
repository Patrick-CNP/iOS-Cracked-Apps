//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DWContext, UIButton, UILabel;

@interface DWFlowPromptView : UIView
{
    _Bool _isFullScreen;
    _Bool _isNetWorkView;
    DWContext *_context;
    CDUnknownBlockType _retryBlock;
    CDUnknownBlockType _backToNormalBlock;
    CDUnknownBlockType _playBlock;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIView *_btnView;
    UIButton *_cancleBtn;
    UIButton *_continueBtn;
    UIButton *_reTryBtn;
    UIView *_subContainer;
    UIButton *_landscapeBackBtn;
}

@property(nonatomic) _Bool isNetWorkView; // @synthesize isNetWorkView=_isNetWorkView;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(retain, nonatomic) UIButton *landscapeBackBtn; // @synthesize landscapeBackBtn=_landscapeBackBtn;
@property(retain, nonatomic) UIView *subContainer; // @synthesize subContainer=_subContainer;
@property(retain, nonatomic) UIButton *reTryBtn; // @synthesize reTryBtn=_reTryBtn;
@property(retain, nonatomic) UIButton *continueBtn; // @synthesize continueBtn=_continueBtn;
@property(retain, nonatomic) UIButton *cancleBtn; // @synthesize cancleBtn=_cancleBtn;
@property(retain, nonatomic) UIView *btnView; // @synthesize btnView=_btnView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType playBlock; // @synthesize playBlock=_playBlock;
@property(copy, nonatomic) CDUnknownBlockType backToNormalBlock; // @synthesize backToNormalBlock=_backToNormalBlock;
@property(copy, nonatomic) CDUnknownBlockType retryBlock; // @synthesize retryBlock=_retryBlock;
@property(retain, nonatomic) DWContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)retryPlay;
- (void)continuePlay;
- (void)dissmissView;
- (void)backToNormal;
- (void)setUpPortraitConstraints;
- (void)setUpLandScapeConstraints;
- (void)setUpView;
- (id)initNoNetworkViewWithFrame:(struct CGRect)arg1 fullScreen:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 fullScreen:(_Bool)arg2;

@end

