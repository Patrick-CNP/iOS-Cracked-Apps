//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MusicBaseCell.h"

#import "UIGestureRecognizerDelegate.h"

@class MusicSpecialButton, NSString, SpecialItem, UIImageView;

@interface YueKuSpecialCell : MusicBaseCell <UIGestureRecognizerDelegate>
{
    UIImageView *_cellImgShadowLeft;
    SpecialItem *_leftSpecial;
    SpecialItem *_rightSpecial;
    id <YueKuSpecialCellDelegate> _delegate;
    MusicSpecialButton *_leftSpecialBtn;
    MusicSpecialButton *_rightSpecialBtn;
    SpecialItem *_selectedSpecial;
    UIImageView *_cellImgShadowRight;
    long long _type;
}

+ (double)calculateItemHeightWithDataSource:(id)arg1 showAuthor:(_Bool)arg2;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIImageView *cellImgShadowRight; // @synthesize cellImgShadowRight=_cellImgShadowRight;
@property(retain, nonatomic) SpecialItem *selectedSpecial; // @synthesize selectedSpecial=_selectedSpecial;
@property(retain, nonatomic) MusicSpecialButton *rightSpecialBtn; // @synthesize rightSpecialBtn=_rightSpecialBtn;
@property(retain, nonatomic) MusicSpecialButton *leftSpecialBtn; // @synthesize leftSpecialBtn=_leftSpecialBtn;
@property(nonatomic) __weak id <YueKuSpecialCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SpecialItem *rightSpecial; // @synthesize rightSpecial=_rightSpecial;
@property(retain, nonatomic) SpecialItem *leftSpecial; // @synthesize leftSpecial=_leftSpecial;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)updateSpecialType:(id)arg1 leftSpecial:(_Bool)arg2;
- (void)rightMusicPlay;
- (void)leftMusicPlay;
- (void)clickRightSpecial;
- (void)clickLeftSpecial;
- (void)layoutSubviews;
- (id)itemCoverShadowImage;
- (void)viewInitWithShowAuthor:(_Bool)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 showAuthor:(_Bool)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
