//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBShopCartBasicModel.h"

@class TBCartShopComponent, TBShopCartCellCustomize;

@interface TBShopCartSectionModel : TBShopCartBasicModel
{
    TBCartShopComponent *_shop;
    TBShopCartCellCustomize *_cellCustomize;
}

@property(retain, nonatomic) TBShopCartCellCustomize *cellCustomize; // @synthesize cellCustomize=_cellCustomize;
@property(retain, nonatomic) TBCartShopComponent *shop; // @synthesize shop=_shop;
- (void).cxx_destruct;
- (_Bool)showGoArrow;

@end

