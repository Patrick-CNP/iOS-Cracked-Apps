//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class TBBlockButton, UILabel, UIView;

@interface TBCartTicketCell : UITableViewCell
{
    UILabel *_priceLabel;
    UILabel *_yuanLabel;
    UILabel *_descLabel;
    UILabel *_limitLabel;
    TBBlockButton *_lingquButton;
    UIView *_separateLine;
}

+ (float)cellCalHeight:(id)arg1;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) TBBlockButton *lingquButton; // @synthesize lingquButton=_lingquButton;
@property(retain, nonatomic) UILabel *limitLabel; // @synthesize limitLabel=_limitLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *yuanLabel; // @synthesize yuanLabel=_yuanLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
- (void).cxx_destruct;
- (void)bindCellData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

