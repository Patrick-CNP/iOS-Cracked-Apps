//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QLJCEBanabaDMComment, UIView;

@interface QLBanabaItem : NSObject
{
    _Bool _banabaIsOnScreen;
    _Bool _hasZan;
    _Bool _banabaFirstTag;
    QLJCEBanabaDMComment *_banabaCommentJceItem;
    unsigned long long _banabaFromType;
    UIView *_banabaADView;
    NSString *_hlwLevelMySelf;
    NSString *_headImageURLMySelf;
}

+ (id)banabaItemForADView:(id)arg1;
+ (id)banabaItemForGiftTypeWithMessage:(id)arg1 withImageURL:(id)arg2 withPresentCount:(long long)arg3;
+ (_Bool)isStarTypeDM:(id)arg1;
+ (_Bool)isMediaTypeDM:(id)arg1;
+ (_Bool)isBubbleDMData:(id)arg1;
+ (id)banabaItemWithEntity:(id)arg1;
+ (id)banabaItemWithJCEEntity:(id)arg1;
@property(copy, nonatomic) NSString *headImageURLMySelf; // @synthesize headImageURLMySelf=_headImageURLMySelf;
@property(copy, nonatomic) NSString *hlwLevelMySelf; // @synthesize hlwLevelMySelf=_hlwLevelMySelf;
@property(nonatomic) _Bool banabaFirstTag; // @synthesize banabaFirstTag=_banabaFirstTag;
@property(retain, nonatomic) UIView *banabaADView; // @synthesize banabaADView=_banabaADView;
@property(nonatomic) _Bool hasZan; // @synthesize hasZan=_hasZan;
@property(nonatomic) unsigned long long banabaFromType; // @synthesize banabaFromType=_banabaFromType;
@property(nonatomic) _Bool banabaIsOnScreen; // @synthesize banabaIsOnScreen=_banabaIsOnScreen;
@property(retain, nonatomic) QLJCEBanabaDMComment *banabaCommentJceItem; // @synthesize banabaCommentJceItem=_banabaCommentJceItem;
- (void).cxx_destruct;
- (void)parseDictionary:(id)arg1;
- (id)description;
- (_Bool)isEmptyContent;
- (id)initBanabaItemForSelf:(id)arg1 withTimestamp:(id)arg2;
- (id)initWithEntity:(id)arg1;
@property(readonly, copy, nonatomic) NSString *banabaHeadUrl;
@property(readonly, copy, nonatomic) NSString *banabaCommentID;
@property(readonly, copy, nonatomic) NSString *banabaFullContent;
- (void)parseJCE:(id)arg1;

@end

