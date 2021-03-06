//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface BDHConfigParserDelegate : NSObject <NSXMLParserDelegate>
{
    NSString *_xmlKey;
    NSMutableDictionary *_timeBaseDict;
    NSMutableDictionary *_timeOrgDict;
    NSMutableArray *_deltaTimeArray;
    int _minElapse;
    int _maxElapse;
    _Bool _enableIPLearning;
    int _expiredElapse;
    int _maxPermittedFailedCount;
    int _successAlias;
    NSArray *_ipSortWeightArray;
    _Bool _enableUseLastSuccSvr;
    int _maxServerFailedTimes;
    _Bool _forceClearServerInfo;
    NSMutableArray *hbCfg;
    NSMutableArray *ipDetectCfg;
}

@property int maxServerFailedTimes; // @synthesize maxServerFailedTimes=_maxServerFailedTimes;
@property(retain) NSMutableArray *ipDetectCfg; // @synthesize ipDetectCfg;
@property(retain) NSMutableArray *hbCfg; // @synthesize hbCfg;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parserDidStartDocument:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

