//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOBaseResponseModel.h"

@class NSArray<TBOAction>, NSMutableArray<TBOCommunity>, NSMutableArray<TBOFeed>, NSString;

@interface TBOFeedSetResponser : TBOBaseResponseModel
{
    NSMutableArray<TBOCommunity> *_community;
    NSMutableArray<TBOFeed> *_feeds;
    NSMutableArray<TBOFeed> *_hotFeeds;
    NSString *_title;
    NSArray<TBOAction> *_actions;
}

@property(retain, nonatomic) NSArray<TBOAction> *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSMutableArray<TBOFeed> *hotFeeds; // @synthesize hotFeeds=_hotFeeds;
@property(retain, nonatomic) NSMutableArray<TBOFeed> *feeds; // @synthesize feeds=_feeds;
@property(retain, nonatomic) NSMutableArray<TBOCommunity> *community; // @synthesize community=_community;
- (void).cxx_destruct;
- (id)items;

@end

