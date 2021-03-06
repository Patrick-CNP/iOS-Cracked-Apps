//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSDPluginProtocol.h"

@class NAMApp, NAMAppDataSource, NSMutableArray, NSMutableDictionary, NSString;

@interface NBAppDataSourceManager : NSObject <PSDPluginProtocol>
{
    long long _onceToken;
    struct {
        unsigned int isAppLoaded:1;
        unsigned int needVerify:1;
        unsigned int isEventListened:1;
    } _myFlags;
    _Bool _enableFallback;
    _Bool _logedMapSuccess;
    int _requestInstallCount;
    NSString *_appid;
    NAMApp *_app;
    NSMutableDictionary *_downloadingDict;
    NSMutableArray *_appDataSources;
    NAMAppDataSource *_mainDataSource;
    NSMutableDictionary *_monitorSignal;
}

@property _Bool logedMapSuccess; // @synthesize logedMapSuccess=_logedMapSuccess;
@property(retain, nonatomic) NSMutableDictionary *monitorSignal; // @synthesize monitorSignal=_monitorSignal;
@property(nonatomic) _Bool enableFallback; // @synthesize enableFallback=_enableFallback;
@property(nonatomic) int requestInstallCount; // @synthesize requestInstallCount=_requestInstallCount;
@property(retain, nonatomic) NAMAppDataSource *mainDataSource; // @synthesize mainDataSource=_mainDataSource;
@property(retain, nonatomic) NSMutableArray *appDataSources; // @synthesize appDataSources=_appDataSources;
@property(retain, nonatomic) NSMutableDictionary *downloadingDict; // @synthesize downloadingDict=_downloadingDict;
@property(readonly, nonatomic) NAMApp *app; // @synthesize app=_app;
@property(readonly, copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (void).cxx_destruct;
- (id)readAppConfig;
- (id)readPermissionConfig;
- (id)mainUrlString:(id)arg1;
- (void)unloadAppData;
- (_Bool)loadAppData:(id)arg1 needVerify:(_Bool)arg2;
- (void)handleFallbackResponseWithEvent:(id)arg1;
- (void)handleEvent:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name;
- (void)appUnzipNotif:(id)arg1;
- (id)appResponse:(id)arg1;
- (void)removeEventListener;
- (void)addEventListener;
@property(readonly, nonatomic) _Bool isAppLoaded;
- (id)initWithAppid:(id)arg1 version:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

