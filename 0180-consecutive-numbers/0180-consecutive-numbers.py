import pandas as pd

def consecutive_numbers(logs: pd.DataFrame) -> pd.DataFrame:
    logs['next_num'] = logs['num'].shift(-1)
    logs['prev_num'] = logs['num'].shift(1)
    consecutive = logs[(logs['num'] == logs['prev_num']) & (logs['num'] == logs['next_num'])]
    result = consecutive['num'].drop_duplicates().reset_index(drop=True)
    return pd.DataFrame({'ConsecutiveNums': result})
