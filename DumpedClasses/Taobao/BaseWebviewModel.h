//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewModel.h"

@class NSURL;

@interface BaseWebviewModel : BaseViewModel
{
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)itemCount:(long long)arg1;
- (id)initWithURL:(id)arg1;

@end

