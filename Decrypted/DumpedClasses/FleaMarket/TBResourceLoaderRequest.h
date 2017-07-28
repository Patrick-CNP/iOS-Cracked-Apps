//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBDataTaskDelegate.h"

@class NSString, NSURL, TBDataTask;

@interface TBResourceLoaderRequest : NSObject <TBDataTaskDelegate>
{
    _Bool _cancel;
    _Bool _finished;
    long long _requestOffset;
    long long _fileLength;
    long long _cacheLength;
    TBDataTask *_dataTask;
    id <TBResourceLoaderRequestDelegate> _delegate;
    NSURL *_requestURL;
}

@property(retain, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(nonatomic) __weak id <TBResourceLoaderRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) _Bool cancel; // @synthesize cancel=_cancel;
@property(nonatomic) long long cacheLength; // @synthesize cacheLength=_cacheLength;
@property(nonatomic) long long fileLength; // @synthesize fileLength=_fileLength;
@property(nonatomic) long long requestOffset; // @synthesize requestOffset=_requestOffset;
- (void).cxx_destruct;
- (void)requestTaskDidCompleteWithError:(id)arg1;
- (void)requestTaskDidReceiveData:(id)arg1;
- (void)requestTaskDidReceiveResponse:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)initWithRequestURL:(id)arg1 delegate:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
