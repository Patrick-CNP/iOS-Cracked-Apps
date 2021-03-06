//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBRecmdCard.h"

@class UIImageView, UILabel;

@interface TBRecmdAskAllCard : TBRecmdCard
{
    UIImageView *_bgImgView;
    UIImageView *_askIconImgView;
    UIImageView *_answerIconImgView;
    UILabel *_askLabel;
    UILabel *_answerLabel;
    UILabel *_countLabel;
}

+ (double)cardHeight;
+ (double)cardWidth;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *answerLabel; // @synthesize answerLabel=_answerLabel;
@property(retain, nonatomic) UILabel *askLabel; // @synthesize askLabel=_askLabel;
@property(retain, nonatomic) UIImageView *answerIconImgView; // @synthesize answerIconImgView=_answerIconImgView;
@property(retain, nonatomic) UIImageView *askIconImgView; // @synthesize askIconImgView=_askIconImgView;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
- (void).cxx_destruct;
- (void)updateLayout;
- (void)prepareForReuse;
- (void)addSubviews;
- (id)init;

@end

