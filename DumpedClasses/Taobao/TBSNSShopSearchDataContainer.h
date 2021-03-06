//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSCardListDataContainer.h"

@class NSArray, TBSNSShopListEmptyData;

@interface TBSNSShopSearchDataContainer : TBSNSCardListDataContainer
{
    NSArray *_localShops;
    NSArray *_shops;
    NSArray *_feeds;
    NSArray *_goods;
    TBSNSShopListEmptyData *_headerShops;
    TBSNSShopListEmptyData *_headerFeeds;
    TBSNSShopListEmptyData *_headerGoods;
    TBSNSShopListEmptyData *_moreShops;
    TBSNSShopListEmptyData *_moreFeeds;
    TBSNSShopListEmptyData *_moreGoods;
}

@property(retain, nonatomic) TBSNSShopListEmptyData *moreGoods; // @synthesize moreGoods=_moreGoods;
@property(retain, nonatomic) TBSNSShopListEmptyData *moreFeeds; // @synthesize moreFeeds=_moreFeeds;
@property(retain, nonatomic) TBSNSShopListEmptyData *moreShops; // @synthesize moreShops=_moreShops;
@property(retain, nonatomic) TBSNSShopListEmptyData *headerGoods; // @synthesize headerGoods=_headerGoods;
@property(retain, nonatomic) TBSNSShopListEmptyData *headerFeeds; // @synthesize headerFeeds=_headerFeeds;
@property(retain, nonatomic) TBSNSShopListEmptyData *headerShops; // @synthesize headerShops=_headerShops;
@property(retain, nonatomic) NSArray *goods; // @synthesize goods=_goods;
@property(retain, nonatomic) NSArray *feeds; // @synthesize feeds=_feeds;
@property(retain, nonatomic) NSArray *shops; // @synthesize shops=_shops;
@property(retain, nonatomic) NSArray *localShops; // @synthesize localShops=_localShops;
- (void).cxx_destruct;
- (id)getDataAtIndex:(long long)arg1;
- (long long)getDataCount;
- (long long)getGoodCount;
- (long long)getFeedCount;
- (long long)getShopCount;
- (long long)getLocalShopCount;
- (id)init;

@end

