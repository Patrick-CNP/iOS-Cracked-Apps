//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMShareProtocol.h"

@class NSString;

@interface FMSelectionDO : NSObject <FMShareProtocol>
{
    NSString *_themeTabId;
    NSString *_link;
    NSString *_pictUrl;
    NSString *_name;
    NSString *_introduce;
    unsigned long long _browserCount;
    NSString *_serverTime;
    NSString *_publishItemPromptTitle;
    NSString *_publishItemPromptContent;
    NSString *_trackCtrlName;
}

@property(copy, nonatomic) NSString *trackCtrlName; // @synthesize trackCtrlName=_trackCtrlName;
@property(copy, nonatomic) NSString *publishItemPromptContent; // @synthesize publishItemPromptContent=_publishItemPromptContent;
@property(copy, nonatomic) NSString *publishItemPromptTitle; // @synthesize publishItemPromptTitle=_publishItemPromptTitle;
@property(copy, nonatomic) NSString *serverTime; // @synthesize serverTime=_serverTime;
@property(nonatomic) unsigned long long browserCount; // @synthesize browserCount=_browserCount;
@property(copy, nonatomic) NSString *introduce; // @synthesize introduce=_introduce;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *pictUrl; // @synthesize pictUrl=_pictUrl;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *themeTabId; // @synthesize themeTabId=_themeTabId;
- (void).cxx_destruct;
- (id)toShareComponent:(id)arg1;

@end

