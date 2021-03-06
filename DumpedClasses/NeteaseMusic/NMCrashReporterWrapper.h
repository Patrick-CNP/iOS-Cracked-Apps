//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NMHttpRequestDelegate.h"

@class NMCrashReportCheckRequest, NMCrashReportRequest, NSMutableDictionary, NSString;

@interface NMCrashReporterWrapper : NSObject <NMHttpRequestDelegate>
{
    NSMutableDictionary *_crashListDictionary;
    NMCrashReportRequest *_uploadCrashRequest;
    NMCrashReportCheckRequest *_checkCrashRequest;
}

+ (id)pathForExtension:(id)arg1 date:(id)arg2 crashKey:(id)arg3;
+ (id)crashLogPath;
+ (id)zipPathForDate:(id)arg1 crashKey:(id)arg2;
+ (id)logPathForDate:(id)arg1 crashKey:(id)arg2;
+ (void)processCrashData:(id)arg1;
+ (id)crashIdInZipPath:(id)arg1;
+ (void)beginWork;
+ (void)freeInstance;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)sortOutCrashLogs;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)uploadZipFiles;
- (void)checkCrashZipMD5s;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

