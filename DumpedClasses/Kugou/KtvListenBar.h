//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGThemeButton, KGThemeImageView, KGThemeLabel, KGThemeView, KTVDynamicPlayerView, UIImageView;

@interface KtvListenBar : UIView
{
    _Bool isTouchVoid;
    KGThemeView *_bgView;
    KGThemeLabel *_lbSongName;
    UIImageView *_activityTagImgView;
    KGThemeButton *_btNickName;
    KGThemeLabel *_lbDes;
    KGThemeImageView *_lbScore;
    KTVDynamicPlayerView *_player;
    CDUnknownBlockType _nickNamePressedBlock;
    CDUnknownBlockType _barPressedBlock;
    UIView *_nilContentView;
    KGThemeImageView *_nilImageView;
    KGThemeLabel *_nilLabel;
    struct CGPoint _startPoint;
}

@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(retain, nonatomic) KGThemeLabel *nilLabel; // @synthesize nilLabel=_nilLabel;
@property(retain, nonatomic) KGThemeImageView *nilImageView; // @synthesize nilImageView=_nilImageView;
@property(retain, nonatomic) UIView *nilContentView; // @synthesize nilContentView=_nilContentView;
@property(copy, nonatomic) CDUnknownBlockType barPressedBlock; // @synthesize barPressedBlock=_barPressedBlock;
@property(copy, nonatomic) CDUnknownBlockType nickNamePressedBlock; // @synthesize nickNamePressedBlock=_nickNamePressedBlock;
@property(retain, nonatomic) KTVDynamicPlayerView *player; // @synthesize player=_player;
@property(retain, nonatomic) KGThemeImageView *lbScore; // @synthesize lbScore=_lbScore;
@property(retain, nonatomic) KGThemeLabel *lbDes; // @synthesize lbDes=_lbDes;
@property(retain, nonatomic) KGThemeButton *btNickName; // @synthesize btNickName=_btNickName;
@property(retain, nonatomic) UIImageView *activityTagImgView; // @synthesize activityTagImgView=_activityTagImgView;
@property(retain, nonatomic) KGThemeLabel *lbSongName; // @synthesize lbSongName=_lbSongName;
@property(retain, nonatomic) KGThemeView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)hideNilContentView;
- (void)showNilContentViewWithText:(id)arg1;
- (void)showOpusView:(_Bool)arg1;
- (void)nickNamePressed;
- (void)configureForBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
