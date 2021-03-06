//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOBaseResponseModel.h"

#import "ITBODetailModel.h"

@class NSMutableArray<TBOAction>, NSMutableArray<TBOTag>, NSMutableArray<TBOTopicFeedSort>, NSString, TBOTopic, TBOUser, TBOVote;

@interface TBOTopicDetailResponser : TBOBaseResponseModel <ITBODetailModel>
{
    TBOTopic *_topic;
    NSMutableArray<TBOTopicFeedSort> *_sorts;
    NSMutableArray<TBOAction> *_actions;
    NSMutableArray<TBOTag> *_tags;
    TBOUser *_creator;
    NSString *_canDelTopic;
    TBOVote *_vote;
    NSString *_buttonText;
    NSString *_buttonIcon;
}

@property(retain, nonatomic) NSString *buttonIcon; // @synthesize buttonIcon=_buttonIcon;
@property(retain, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(retain, nonatomic) TBOVote *vote; // @synthesize vote=_vote;
@property(retain, nonatomic) NSString *canDelTopic; // @synthesize canDelTopic=_canDelTopic;
@property(retain, nonatomic) TBOUser *creator; // @synthesize creator=_creator;
@property(retain, nonatomic) NSMutableArray<TBOTag> *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSMutableArray<TBOAction> *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSMutableArray<TBOTopicFeedSort> *sorts; // @synthesize sorts=_sorts;
@property(retain, nonatomic) TBOTopic *topic; // @synthesize topic=_topic;
- (void).cxx_destruct;
- (id)detailInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

