//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLSImageView, UILabel;

@interface QLMyWalletWinVcoinTipView : UIView
{
    UILabel *_leftCopyrightLabel;
    QLSImageView *_imageView;
    UILabel *_rightCopyrightLabel;
}

@property(retain, nonatomic) UILabel *rightCopyrightLabel; // @synthesize rightCopyrightLabel=_rightCopyrightLabel;
@property(retain, nonatomic) QLSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *leftCopyrightLabel; // @synthesize leftCopyrightLabel=_leftCopyrightLabel;
- (void).cxx_destruct;
- (void)loadUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

