/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class QLPreviewParts, NSDictionary, NSURLRequest, NSURLResponse, NSString;

@interface QLPreviewConverter : XXUnknownSuperclass {
@private
	QLPreviewParts* _previewParts;
	NSDictionary* _options;
}
@property(readonly, assign, nonatomic) NSString* previewFileName;
@property(readonly, assign, nonatomic) QLPreviewParts* previewParts;
@property(readonly, assign, nonatomic) NSURLRequest* previewRequest;
@property(readonly, assign, nonatomic) NSURLResponse* previewResponse;
@property(readonly, assign, nonatomic) NSString* previewUTI;
+(id)_csvUTIs;
+(id)_iWorkUTIs;
+(id)_lpdfUTIs;
+(id)_officeUTIs;
+(id)_rtfUTIs;
+(id)_spreadSheetUTIs;
+(BOOL)canConvertDocumentType:(id)type;
+(BOOL)isCSVDocumentType:(id)type;
+(BOOL)isIWorkDocumentType:(id)type;
+(BOOL)isLPDFDocumentType:(id)type;
+(BOOL)isOfficeDocumentType:(id)type;
+(BOOL)isRTFDocumentType:(id)type;
+(BOOL)isSafeRequest:(id)request;
+(BOOL)isSafeURL:(id)url;
+(BOOL)isSpreadSheetDocumentType:(id)type;
-(id)initWithConnection:(id)connection delegate:(id)delegate response:(id)response options:(id)options;
-(id)initWithData:(id)data name:(id)name uti:(id)uti options:(id)options;
-(id)initWithURL:(id)url uti:(id)uti options:(id)options;
-(void)_register;
-(void)appendData:(id)data;
-(void)appendDataArray:(id)array;
-(void)cancel;
-(void)dealloc;
-(void)finishConverting;
-(void)finishedAppendingData;
-(BOOL)isCancelled;
-(BOOL)isComputed;
// declared property getter: -(id)previewFileName;
// declared property getter: -(id)previewParts;
// declared property getter: -(id)previewRequest;
// declared property getter: -(id)previewResponse;
// declared property getter: -(id)previewUTI;
-(id)safeRequestForRequest:(id)request;
@end

