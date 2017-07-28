//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedButton, SSThemedImageView, TTPersonalHomeFollowButton, TTPersonalHomeFollowView, TTPersonalHomeIconView, TTPersonalHomeUserInfoDataResponseModel;

@interface TTPersonalHomeHeaderOperationView : SSThemedView
{
    _Bool _hasVerified;
    TTPersonalHomeIconView *_iconView;
    TTPersonalHomeFollowView *_followView;
    SSThemedButton *_privateMessageBtn;
    SSThemedButton *_certificationBtn;
    TTPersonalHomeFollowButton *_unBlockView;
    TTPersonalHomeFollowButton *_profileView;
    SSThemedImageView *_sanjiaoIcon;
    TTPersonalHomeUserInfoDataResponseModel *_infoModel;
}

@property(nonatomic) _Bool hasVerified; // @synthesize hasVerified=_hasVerified;
@property(retain, nonatomic) TTPersonalHomeUserInfoDataResponseModel *infoModel; // @synthesize infoModel=_infoModel;
@property(nonatomic) __weak SSThemedImageView *sanjiaoIcon; // @synthesize sanjiaoIcon=_sanjiaoIcon;
@property(nonatomic) __weak TTPersonalHomeFollowButton *profileView; // @synthesize profileView=_profileView;
@property(nonatomic) __weak TTPersonalHomeFollowButton *unBlockView; // @synthesize unBlockView=_unBlockView;
@property(nonatomic) __weak SSThemedButton *certificationBtn; // @synthesize certificationBtn=_certificationBtn;
@property(nonatomic) __weak SSThemedButton *privateMessageBtn; // @synthesize privateMessageBtn=_privateMessageBtn;
@property(nonatomic) __weak TTPersonalHomeFollowView *followView; // @synthesize followView=_followView;
@property(nonatomic) __weak TTPersonalHomeIconView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)privateMessageAnimationWithIsSpread:(_Bool)arg1;
- (_Bool)shouldShowPrivateMessage;
- (void)setPrivateMessage;
- (void)clearVerified;
- (void)setVerified;
- (void)setupSubviewData;
- (void)setupSubview;
- (id)initWithFrame:(struct CGRect)arg1;

@end
