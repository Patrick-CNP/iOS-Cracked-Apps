//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGThemeImageView, KGThemeLabel, KGThemeLine, NeeButton, OperateEntry, UIImageView;

@interface YueKuRecommendOpertionView : UIView
{
    UIImageView *_coverShadowImageView;
    float _titleLabelMaxWidth;
    UIImageView *_headTitelImgView;
    KGThemeLabel *_titleLabel;
    KGThemeLabel *_descripationLabel;
    KGThemeImageView *_arrowImgView;
    OperateEntry *_operateEntry;
    CDUnknownBlockType _confirmBlock;
    KGThemeLine *_topSplitLine;
    NeeButton *_tapBtn;
}

@property(nonatomic) float titleLabelMaxWidth; // @synthesize titleLabelMaxWidth=_titleLabelMaxWidth;
@property(retain, nonatomic) NeeButton *tapBtn; // @synthesize tapBtn=_tapBtn;
@property(retain, nonatomic) KGThemeLine *topSplitLine; // @synthesize topSplitLine=_topSplitLine;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(retain, nonatomic) OperateEntry *operateEntry; // @synthesize operateEntry=_operateEntry;
@property(retain, nonatomic) KGThemeImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) KGThemeLabel *descripationLabel; // @synthesize descripationLabel=_descripationLabel;
@property(retain, nonatomic) KGThemeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *headTitelImgView; // @synthesize headTitelImgView=_headTitelImgView;
- (void).cxx_destruct;
- (void)tapBtnCliked;
- (void)handleNotification:(id)arg1;
- (void)unregisterNotification;
- (void)registerNotification;
- (void)loadDataForUI;
- (void)reView;
- (void)layoutSubviews;
- (id)coverShadowImage;
- (void)makeShadow;
- (void)uiSubView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
