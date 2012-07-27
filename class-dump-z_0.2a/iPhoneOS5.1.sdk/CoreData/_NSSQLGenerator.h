/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSSQLAdapter, NSSQLStatement, NSSQLStoreMappingGenerator, NSMutableArray, NSMutableString;

__attribute__((visibility("hidden")))
@interface _NSSQLGenerator : XXUnknownSuperclass {
@private
	NSSQLStatement* _statement;
	NSSQLAdapter* _adapter;
	NSMutableString* _sqlString;
	NSMutableDictionary* _aliasMap;
	NSSQLStoreMappingGenerator* _aliasNamer;
	NSMutableString* _joinClause;
	NSMutableString* _whereClause;
	NSMutableString* _selectList;
	NSMutableString* _orderByClause;
	BOOL _allowToManyKeyPath;
	BOOL _useDistinct;
	BOOL _autoDistinct;
	unsigned _scopedByORPredicate;
	NSMutableArray* _comparisonPredicateScopedItem;
}
+(void)initialize;
-(id)initWithStatement:(id)statement forAdapter:(id)adapter;
-(void)_addBindVarForConstVal1:(id)constVal1;
-(void)_addBindVarForConstVal2:(id)constVal2;
-(void)_appendWhereClauseForConstVal:(id)constVal;
-(void)_appendWhereClauseForConstantCollection:(id)constantCollection;
-(void)_appendWhereClauseForExpressionCollection:(id)expressionCollection;
-(BOOL)_isForeignObjectExpression:(id)expression;
-(BOOL)_isNullExpression:(id)expression;
-(id)_newPredicateWithInheritanceForFetchRequest:(id)fetchRequest;
-(id)_newWildSubStringForGlob:(id)glob wildStart:(BOOL)start wildEnd:(BOOL)end;
-(void)_prepareConst:(id)aConst inAttribute:(id)attribute sensitiveOptions:(unsigned)options;
-(void)_prepareConst:(id)aConst inManyToMany:(id)many;
-(void)_prepareConst:(id)aConst inToMany:(id)many;
-(BOOL)_prepareFunctionExpression:(id)expression;
-(void)_preparePredicate:(id)predicate;
-(void)_preparePredicateExpression:(id)expression;
-(void)_preparePredicateOperator:(id)anOperator;
-(void)_prepareString:(id)string expressionPath:(id)path sensitiveOptions:(unsigned)options wildStart:(BOOL)start wildEnd:(BOOL)end allowToMany:(BOOL)many;
-(void)_prepareSubstringWith:(id)with wildStart:(BOOL)start wildEnd:(BOOL)end;
-(id)_reducedSubpredicates:(id)subpredicates;
-(id)_retainedPrimaryKeyNumberForObject:(id)object;
-(id)_retainedPrimaryKeyNumberForObjectID:(NSScalarObjectID*)objectID;
-(void)_startSQL:(id)sql;
-(id)addJoinForDirectToManyToMany:(id)many;
-(void)addJoinForManyToManyRelationship:(id)manyRelationship sourcePath:(id)path destinationPath:(id)path3;
-(void)addJoinForToManyRelationship:(id)manyRelationship sourcePath:(id)path destinationPath:(id)path3;
-(void)addJoinForToOneRelationship:(id)oneRelationship sourcePath:(id)path destinationPath:(id)path3;
-(void)appendClause:(id)clause forKeyPath:(id)keyPath allowToMany:(BOOL)many;
-(void)appendClause:(id)clause forKeyPathExpression:(id)keyPathExpression allowToMany:(BOOL)many;
-(void)appendClause:(id)clause forProperty:(id)property keypath:(id)keypath;
-(void)appendCountClause:(id)clause forToManyKeyPath:(id)manyKeyPath;
-(void)appendJoinClauseToSQL;
-(void)appendLimitClauseToSQL:(unsigned)sql;
-(void)appendOrderByClauseToSQL;
-(void)appendSQL:(id)sql;
-(void)appendSelectListToSQLForRequest:(id)request;
-(void)appendWhereClause:(id)clause;
-(void)appendWhereClauseToSQL;
-(BOOL)autoDistinct;
-(void)buildOrderByClauseWithSortDescriptors:(id)sortDescriptors;
-(void)buildWhereClauseForRow:(id)row optLock:(long long)lock;
-(void)buildWhereClauseWithSelectPredicate:(id)selectPredicate;
-(void)buildWhereClauseWithSimplePredicate:(id)simplePredicate;
-(void)dealloc;
-(BOOL)foldComparisonPredicate:(id)predicate;
-(BOOL)isToManyCountKeyPath:(id)manyCountKeyPath;
-(void)prepareBeginsWith:(id)with;
-(void)prepareBetween:(id)between;
-(void)prepareComparisonPredicate:(id)predicate;
-(void)prepareCountStatementWithFetchRequest:(id)fetchRequest;
-(void)prepareDeleteStatementWithCorrelation:(id)correlation;
-(void)prepareDeleteStatementWithRow:(id)row;
-(void)prepareEndsWith:(id)with;
-(void)prepareIn:(id)anIn swap:(BOOL)swap;
-(void)prepareInsertStatementWithCorrelation:(id)correlation;
-(void)prepareInsertStatementWithRow:(id)row;
-(void)prepareLike:(id)like;
-(void)prepareMatches:(id)matches;
-(void)prepareSelectStatementWithFetchRequest:(id)fetchRequest ignoreInheritance:(BOOL)inheritance;
-(void)prepareUpdateStatementWithCorrelation:(id)correlation;
-(void)prepareUpdateStatementWithRow:(id)row originalRow:(id)row2;
-(void)setAutoDistinct:(BOOL)distinct;
-(id)sqlString;
-(unsigned)sqlTypeForExpressionConstantValue:(id)expressionConstantValue;
-(unsigned)sqlTypeForPropertyAtEndOfKeyPath:(id)keyPath;
-(id)whereClause;
@end

