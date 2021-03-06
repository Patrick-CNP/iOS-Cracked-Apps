//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMAvatarView, NMContentTagView, NMCustomTruncatingLabel, NMEssenceTipView, UIButton, UIImage, UIImageView, UILabel;

@interface NMPrivateMessageEventButton : UIView
{
    UIImageView *_shareImageView;
    UIImageView *_playIcon;
    UIImageView *_cornerImageView;
    NMEssenceTipView *_essenceLogoImageView;
    UIImageView *_subjectIcon;
    NMCustomTruncatingLabel *_titleLabel;
    UILabel *_subTitleLabel;
    NMContentTagView *_tagView;
    UILabel *_creatorLabel;
    UIImage *_albumCoverImage;
    UIButton *_backgroundButton;
    UIImageView *_cloudDriveIconView;
    NMAvatarView *_avatarView;
    UIImageView *_arrowView;
    _Bool _isMyMessage;
    _Bool _isGift;
    UIImageView *_payMaskView;
    id _data;
}

+ (double)heightForData:(id)arg1 width:(double)arg2;
+ (double)width;
+ (id)getDefaultImg:(id)arg1 size:(struct CGSize)arg2;
+ (id)getImgUrl:(id)arg1;
+ (id)getCreatorString:(id)arg1;
+ (id)getTitleAtFirstLine:(id)arg1 fontSize:(double)arg2 withTageSize:(struct CGSize)arg3 withImageWidth:(double)arg4;
+ (id)getTitleString:(id)arg1;
@property(readonly, nonatomic) id data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setData:(id)arg1 isGift:(_Bool)arg2 isMyMessage:(_Bool)arg3;
- (void)setData:(id)arg1 isMyMessage:(_Bool)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (void)handleChangeSkin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

