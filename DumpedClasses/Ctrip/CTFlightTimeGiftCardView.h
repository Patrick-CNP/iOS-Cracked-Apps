//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTGiftCardListView, UIButton, UILabel;

@interface CTFlightTimeGiftCardView : UIView
{
    _Bool _giftCardIsshow;
    _Bool _timeIntructionIsshow;
    _Bool _firstOrderCardIsshow;
    id <CTFlightTimeGiftCarddelegate> _delegate;
    CTGiftCardListView *_giftCard;
    UIView *_timeIntruction;
    UIView *_viewBack;
    UILabel *_cartridgeLabel;
    UIButton *_xxBt;
    UIView *_firstOrderCard;
}

+ (id)initView;
@property(nonatomic) _Bool firstOrderCardIsshow; // @synthesize firstOrderCardIsshow=_firstOrderCardIsshow;
@property(retain, nonatomic) UIView *firstOrderCard; // @synthesize firstOrderCard=_firstOrderCard;
@property(nonatomic) _Bool timeIntructionIsshow; // @synthesize timeIntructionIsshow=_timeIntructionIsshow;
@property(nonatomic) _Bool giftCardIsshow; // @synthesize giftCardIsshow=_giftCardIsshow;
@property(retain, nonatomic) UIButton *xxBt; // @synthesize xxBt=_xxBt;
@property(nonatomic) __weak UILabel *cartridgeLabel; // @synthesize cartridgeLabel=_cartridgeLabel;
@property(retain, nonatomic) UIView *viewBack; // @synthesize viewBack=_viewBack;
@property(retain, nonatomic) UIView *timeIntruction; // @synthesize timeIntruction=_timeIntruction;
@property(retain, nonatomic) CTGiftCardListView *giftCard; // @synthesize giftCard=_giftCard;
@property(nonatomic) __weak id <CTFlightTimeGiftCarddelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)DoCloseButtonAction:(id)arg1;
- (void)resetViewframe;
- (void)redrawViewLayout;
- (void)setFirstOrderCardView:(id)arg1;
- (void)setShowFirstOrder:(_Bool)arg1;
- (void)setIsshow:(_Bool)arg1 time:(_Bool)arg2;
- (_Bool)isShow;
- (void)giftcardequ:(id)arg1;
- (void)setListBaseCacheBean:(id)arg1;
- (void)setListBaseCacheBeanModel:(id)arg1;

@end

